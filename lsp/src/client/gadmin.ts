export function parseGadminStatus(stdout: string): string[][] {
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
	return r
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