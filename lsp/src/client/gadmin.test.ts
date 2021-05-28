import { deepStrictEqual } from 'assert'
import { parseGadminStatus } from './gadmin'

describe("", () => {

	it("", () => {

		let x = `	 
		+--------------------+-------------------------+-------------------------+
		|    Service Name    |     Service Status      |      Process State      |
		+--------------------+-------------------------+-------------------------+
		|      ADMIN#1       |         Online          |         Running         |
		|       CTRL#1       |         Online          |         Running         |
		|       DICT#1       |         Online          |         Running         |
		|       ETCD#1       |         Online          |         Running         |
		|      GPE_1#1       |          Down           |         Stopped         |
		|      GSE_1#1       |         Warmup          |         Running         |
		|       GSQL#1       |         Online          |         Running         |
		|       GUI#1        |         Online          |         Running         |
		|       IFM#1        |         Online          |         Running         |
		|      KAFKA#1       |         Online          |         Running         |
		|    KAFKACONN#1     |         Online          |         Running         |
		|   KAFKASTRM-LL_1   |         Online          |         Running         |
		|      NGINX#1       |         Online          |         Running         |
		|      RESTPP#1      |          Down           |         Stopped         |
		|     TS3SERV#1      |         Online          |         Running         |
		|       TS3_1        |         Online          |         Running         |
		|        ZK#1        |         Online          |         Running         |
		+--------------------+-------------------------+-------------------------+
		`
		let r = parseGadminStatus(x)
		deepStrictEqual(r, [
			['ADMIN#1', 'Online', 'Running'],
			['CTRL#1', 'Online', 'Running'],
			['DICT#1', 'Online', 'Running'],
			['ETCD#1', 'Online', 'Running'],
			['GPE_1#1', 'Down', 'Stopped'],
			['GSE_1#1', 'Warmup', 'Running'],
			['GSQL#1', 'Online', 'Running'],
			['GUI#1', 'Online', 'Running'],
			['IFM#1', 'Online', 'Running'],
			['KAFKA#1', 'Online', 'Running'],
			['KAFKACONN#1', 'Online', 'Running'],
			['KAFKASTRM-LL_1', 'Online', 'Running'],
			['NGINX#1', 'Online', 'Running'],
			['RESTPP#1', 'Down', 'Stopped'],
			['TS3SERV#1', 'Online', 'Running'],
			['TS3_1', 'Online', 'Running'],
			['ZK#1', 'Online', 'Running']
		])
	})

})