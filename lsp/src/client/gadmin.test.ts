import { deepStrictEqual } from 'assert'
import { parseGadminLogs, parseGadminStatus } from './gadmin'

describe("", () => {

	it("gadmin status -v", () => {

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

	it("gadmin logs", () => {
		let x = `
		ADMIN  : /home/tg/tigergraph/log/admin/ADMIN#1.out
		ADMIN  : /home/tg/tigergraph/log/admin/ADMIN.INFO
		CTRL   : /home/tg/tigergraph/log/controller/CTRL#1.log
		CTRL   : /home/tg/tigergraph/log/controller/CTRL#1.out
		DICT   : /home/tg/tigergraph/log/dict/DICT#1.out
		DICT   : /home/tg/tigergraph/log/dict/DICT.INFO
		ETCD   : /home/tg/tigergraph/log/etcd/ETCD#1.out
		EXE    : /home/tg/tigergraph/log/executor/EXE_1.log
		EXE    : /home/tg/tigergraph/log/executor/EXE_1.out
		GPE    : /home/tg/tigergraph/log/gpe/GPE_1#1.out
		GPE    : /home/tg/tigergraph/log/gpe/log.INFO
		GSE    : /home/tg/tigergraph/log/gse/GSE_1#1.out
		GSE    : /home/tg/tigergraph/log/gse/log.INFO
		GSQL   : /home/tg/tigergraph/log/gsql/GSQL#1.out
		GSQL   : /home/tg/tigergraph/log/gsql/log.INFO
		GUI    : /home/tg/tigergraph/log/gui/GUI#1.out
		IFM    : /home/tg/tigergraph/log/informant/IFM#1.log
		IFM    : /home/tg/tigergraph/log/informant/IFM#1.out
		KAFKA  : /home/tg/tigergraph/log/kafka/controller.log
		KAFKA  : /home/tg/tigergraph/log/kafka/kafka-request.log
		KAFKA  : /home/tg/tigergraph/log/kafka/kafka.log
		KAFKA  : /home/tg/tigergraph/log/kafka/server.log
		KAFKA  : /home/tg/tigergraph/log/kafka/state-change.log
		KAFKACONN: /home/tg/tigergraph/log/kafkaconn/KAFKACONN#1.out
		KAFKACONN: /home/tg/tigergraph/log/kafkaconn/kafkaconn.log
		KAFKASTRM-LL: /home/tg/tigergraph/log/kafkastrm-ll/KAFKASTRM-LL_1.out
		KAFKASTRM-LL: /home/tg/tigergraph/log/kafkastrm-ll/kafkastrm-ll.log
		NGINX  : /home/tg/tigergraph/log/nginx/logs/NGINX#1.out
		NGINX  : /home/tg/tigergraph/log/nginx/logs/error.log
		RESTPP : /home/tg/tigergraph/log/restpp/RESTPP#1.out
		RESTPP : /home/tg/tigergraph/log/restpp/log.INFO
		RESTPP-LOADER: /home/tg/tigergraph/log/fileLoader/log.INFO
		TS3    : /home/tg/tigergraph/log/ts3/TS3_1.log
		TS3    : /home/tg/tigergraph/log/ts3/TS3_1.out
		TS3SERV: /home/tg/tigergraph/log/ts3serv/TS3SERV#1.out
		ZK     : /home/tg/tigergraph/log/zk/ZK#1.out
		ZK     : /home/tg/tigergraph/log/zk/zookeeper.log
		`
		let r = parseGadminLogs(x)
		deepStrictEqual(r, [
			['ADMIN', '/home/tg/tigergraph/log/admin/ADMIN#1.out'],
			['ADMIN', '/home/tg/tigergraph/log/admin/ADMIN.INFO'],
			['CTRL', '/home/tg/tigergraph/log/controller/CTRL#1.log'],
			['CTRL', '/home/tg/tigergraph/log/controller/CTRL#1.out'],
			['DICT', '/home/tg/tigergraph/log/dict/DICT#1.out'],
			['DICT', '/home/tg/tigergraph/log/dict/DICT.INFO'],
			['ETCD', '/home/tg/tigergraph/log/etcd/ETCD#1.out'],
			['EXE', '/home/tg/tigergraph/log/executor/EXE_1.log'],
			['EXE', '/home/tg/tigergraph/log/executor/EXE_1.out'],
			['GPE', '/home/tg/tigergraph/log/gpe/GPE_1#1.out'],
			['GPE', '/home/tg/tigergraph/log/gpe/log.INFO'],
			['GSE', '/home/tg/tigergraph/log/gse/GSE_1#1.out'],
			['GSE', '/home/tg/tigergraph/log/gse/log.INFO'],
			['GSQL', '/home/tg/tigergraph/log/gsql/GSQL#1.out'],
			['GSQL', '/home/tg/tigergraph/log/gsql/log.INFO'],
			['GUI', '/home/tg/tigergraph/log/gui/GUI#1.out'],
			['IFM', '/home/tg/tigergraph/log/informant/IFM#1.log'],
			['IFM', '/home/tg/tigergraph/log/informant/IFM#1.out'],
			['KAFKA', '/home/tg/tigergraph/log/kafka/controller.log'],
			['KAFKA', '/home/tg/tigergraph/log/kafka/kafka-request.log'],
			['KAFKA', '/home/tg/tigergraph/log/kafka/kafka.log'],
			['KAFKA', '/home/tg/tigergraph/log/kafka/server.log'],
			['KAFKA', '/home/tg/tigergraph/log/kafka/state-change.log'],
			['KAFKACONN', '/home/tg/tigergraph/log/kafkaconn/KAFKACONN#1.out'],
			['KAFKACONN', '/home/tg/tigergraph/log/kafkaconn/kafkaconn.log'],
			[
				'KAFKASTRM-LL',
				'/home/tg/tigergraph/log/kafkastrm-ll/KAFKASTRM-LL_1.out'
			],
			[
				'KAFKASTRM-LL',
				'/home/tg/tigergraph/log/kafkastrm-ll/kafkastrm-ll.log'
			],
			['NGINX', '/home/tg/tigergraph/log/nginx/logs/NGINX#1.out'],
			['NGINX', '/home/tg/tigergraph/log/nginx/logs/error.log'],
			['RESTPP', '/home/tg/tigergraph/log/restpp/RESTPP#1.out'],
			['RESTPP', '/home/tg/tigergraph/log/restpp/log.INFO'],
			['RESTPP-LOADER', '/home/tg/tigergraph/log/fileLoader/log.INFO'],
			['TS3', '/home/tg/tigergraph/log/ts3/TS3_1.log'],
			['TS3', '/home/tg/tigergraph/log/ts3/TS3_1.out'],
			['TS3SERV', '/home/tg/tigergraph/log/ts3serv/TS3SERV#1.out'],
			['ZK', '/home/tg/tigergraph/log/zk/ZK#1.out'],
			['ZK', '/home/tg/tigergraph/log/zk/zookeeper.log']
		])
	})

})