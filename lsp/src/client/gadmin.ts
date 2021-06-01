import { sleep } from '@creatcodebuild/csp';
import { exec as _exec } from 'child_process';
import { deepStrictEqual } from 'assert';
import util from 'util';
const exec = util.promisify(_exec);

export function parseGadminStatus(stdout: string): Status[] {
	let r: string[] | string[][] = stdout.split('\n').filter(line => line != '').filter(line => {
		for (let c of line) {
			if (c == ' ' || c == '\t') { // not whitespace
				continue
			} else {
				return true
			}
		}
		return false
	})
	r = r.slice(3, r.length - 1)
	r = r.map(line => {
		return Array.from(line)
			.filter(char => char != ' ' && char != '\t')
			.join('')
			.split('|')
			.slice(1, 4)
	})
	return r.map(status => {
		return {
			ServiceName: status[0],
			ServiceStatus: status[1],
			ProcessStatus: status[2]
		}
	})
}

export function parseGadminLogs(stdout: string) {
	let r: string[] | string[][] = stdout.split('\n').filter(line => line != '').filter(line => {
		for (let c of line) {
			if (c == ' ' || c == '\t') { // not whitespace
				continue
			} else {
				return true
			}
		}
		return false
	})
	r = r.map(line => {
		return Array.from(line)
			.filter(char => char != ' ' && char != '\t').join('').split(':')
	})

	return r;
}

export type ServiceStatus = "Online" | "Down" | "Warmup"
export type ProcessStatus = "Running" | "Stopped"

export interface Status {
	ServiceName: string
	ServiceStatus: string
	ProcessStatus: string
}

export type Config = "TigerDE.OSUser" | "TigerDE.SHELL"

export interface ConfigGetter {
	(config: Config): string
}

// This is a concurrent safe object
export class GadminSyncer {

	status: Status[] = []

	constructor(
		public configGetter: ConfigGetter,
		public refreshInterval: number
	) { }

	// resolve when status is changed or when asking for the 1st time.
	async statusChanged(): Promise<Status[]> {
		console.log("wait for GadminSyncer.statusChanged")
		function run() {
			let r = tgCMD("gadmin status -v", this.configGetter("TigerDE.OSUser"), this.configGetter("TigerDE.SHELL"))
			console.log("run", r)
			return r;
		}
		if (this.status.length == 0) {
			console.log("this.status.length == 0")
			const stdout = await run()
			this.status = parseGadminStatus(stdout);
		} else {
			console.log("this.status.length != 0")
			while (true) {
				await sleep(3333)
				const stdout = await run()
				const newStatus = parseGadminStatus(stdout);
				try {
					deepStrictEqual(newStatus, this.status)
				} catch {
					this.status = newStatus
					break
				}
			}
		}
		return this.status;
	}

	async logFiles() {
		while(true) {
			try {
				const stdout =  await tgCMD("gadmin log", this.configGetter("TigerDE.OSUser"), this.configGetter("TigerDE.SHELL"))
				return parseGadminLogs(stdout);
			} catch {
				await sleep(1000)
			}
		}
	}

}

export async function tgCMD(cmd: string, tgOSUser: string, shell: string): Promise<string> {
	let rc = ".bashrc"
	if(shell.toLowerCase() == "zsh") {
		rc = ".zshrc"
	} else {
		console.log(`unrecognized TigerDE.SHELL ${shell}`)
	}
	const command = `su -l -c "source ~/${rc} && ${cmd}" ${tgOSUser}`
	console.log(command)
	try {
		let { stdout, stderr } = await exec(command);
		console.log('stdout:', stdout);
		console.log('stderr:', stderr);
		return stdout;
	} catch(e) {
		console.log(e)
		return ''
	}
}