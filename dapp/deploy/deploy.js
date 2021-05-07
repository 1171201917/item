var fs = require('fs');
var Vnt = require('vnt');
var vntkit = require('vnt-kit');
var Tx = require('ethereumjs-tx');
var Cm=require("ethereumjs-common").default
var vnt = new Vnt();
var url='http://47.111.100.232:8880'; 
var chainid = 2;
// 合约部署地址
var contractAddress = '0xf91fa1db5e7195eace4d607e12e7725276ae044e';

var codeFile = '/home/jjl/dapp/contract/output/$Czqq.compress'
var abiFile = '/home/jjl/dapp/contract/output/$Czqq.abi'

var wasmabi=fs.readFileSync(abiFile);
var abi=JSON.parse(wasmabi.toString("utf-8"));

var vnt = new Vnt();
vnt.setProvider(new vnt.providers.HttpProvider("http://47.111.100.232:8880"));


var from1= "0x099e7e3f11ca41d6c2ca741d6f69e6f550cb8428";
var from1Keystore="/home/jjl/dapp/vntnode/Tue, 09 Mar 2021 11 46 57 GMT";
var pass1 = "ljj001124";

var from2="0xf60d6a964972398284205df833103b4f61f5d489";
var from2Keystore="/home/jjl/dapp/vntnode/Tue, 09 Mar 2021 11 59 46 GMT";
var pass2="hjl55555"



function openAccount(file, passwd) {
    var content = fs.readFileSync(file).toString("utf-8")
    return vntkit.account.decrypt(content, passwd, false)
}
try{
    var account = openAccount(from1Keystore, pass1);
    console.log(account);
}catch(err){	
    console.log(err.message)
 
}

function deployWasmContract(){
    // 通过abi与代码路径初始化合约
    var contract = vnt.core.contract(abi).codeFile(codeFile)

    // 生成合约创建的数据
    var data = contract.packContructorData(1000000000, "bitcoin", "BTC")

    // 预估一个gas值
    var gas = vnt.core.estimateGas({data: data});

    // 获取账户1的下一个nonce值
    var nonce = vnt.core.getTransactionCount(account.address);

    // 生成交易的结构体，指定nonce, gasPirce, gasLimit, value, data等字段
    var options = {
       nonce: vnt.toHex(nonce),
       gasPrice: vnt.toHex(30000000000000),
       gasLimit: vnt.toHex(gas),
       value: '0x00',
       data: data,
       chainId: 2
    }
	console.log(vnt.core.getBalance(account.address))
    // 生成交易
    var tx = new Tx(options);
    // 使用之前准备好的私钥，对交易签名
    tx.sign(Buffer.from(account.privateKey.substring(2,), "hex"));

    // 将交易数据进行序列化
    var serializedTx = tx.serialize();

    // 发送交易
    vnt.core.sendRawTransaction('0x' + serializedTx.toString('hex'),
    function(err, txHash) {
      if (err) {
          console.log("err happened: ", err)
      } else {
          // 打印交易的hash
          console.log("transaction hash: ", txHash);
          // 获取交易的清单
          getTransactionReceipt(txHash, function(receipt) {
              console.log("tx receipt: ", receipt)
              console.log("tx status: ", receipt.status)
              console.log("contract address: ", receipt.contractAddress)
          })
      }
    });
}


function getTransactionReceipt(tx, cb) {
  var receipt = vnt.core.getTransactionReceipt(tx);
  if (!receipt) {
    setTimeout(function() {
      getTransactionReceipt(tx, cb)
    }, 1000);
  } else {
    cb(receipt)
  }
}



// 存储证书数据
function putcopyright(useraddr, name, schoolname, sex , idcard , birth , subject , certificateid , entrancetime , graduatetime , timestamp, filehash, ipfshash, certificatetype, deadline)
{
    var contract = vnt.core.contract(abi);
    var data = contract.packFunctionData("PutStore", [useraddr, name, schoolname, sex , idcard , birth , subject , certificateid , entrancetime , graduatetime , timestamp, filehash, ipfshash, certificatetype, deadline]);
    sendRawTransaction(account, contractAddress, data, vnt.toHex(0))
}

// 存储证书数据+
function putmanycopyright(useraddr, name, schoolname, sex , idcard , birth , subject , certificateid , entrancetime , graduatetime , timestamp, filehash, ipfshash, certificatetype, deadline)
{
    var contract = vnt.core.contract(abi);
    for(var i = 0 ; i < useraddr.leagth();i++)
    var data = contract.packFunctionData("PutStore", [useraddr[i], name, schoolname, sex , idcard , birth , subject , certificateid , entrancetime , graduatetime , timestamp, filehash, ipfshash, certificatetype, deadline]);
    sendRawTransaction(account, contractAddress, data, vnt.toHex(0))
}


// 查询单个用户的所有证书
function getaccountcertificate()
{
    var contract = vnt.core.contract(abi).at(contractAddress);
    var r = contract.GetAccountInfo.call({from: account.address});
    console.log('result:', r.toString());
    console.log(new Date().getSeconds()+":"+new Date().getMilliseconds())
    return r.toString();
}

// 查询所有的filehash与ipfshash
function getallhash()
{
    var contract = vnt.core.contract(abi).at(contractAddress);
    var r = contract.GetALLHash.call({from: account.address});
    console.log('result:', r.toString());
    return r.toString();
}

function getalluser()
{
    var contract = vnt.core.contract(abi).at(contractAddress);
    var r = contract.Getalluser.call({from: account.address});
    console.log('result:', r.toString());
    return r.toString();
}
function sendRawTransaction(account,to,data,value){
  var nonce = vnt.core.getTransactionCount(account.address);
  var options = {
    nonce: nonce,
    to: to,
    gasPrice: vnt.toHex(vnt.toWei(18, 'Gwei')),
    gasLimit: vnt.toHex(4000000),
    data: data,
    value: value,
    chainId: 2
  };
  var tx = new Tx(options);
  tx.sign(Buffer.from(
    account.privateKey.substring(
          2,
          ),
      'hex'));
  var serializedTx = tx.serialize();
  vnt.core.sendRawTransaction(
    '0x' + serializedTx.toString('hex'), function(err, txHash) {
      if (err) {
        console.log('err happened: ', err)
        console.log('transaction hash: ', txHash);
      } else {
        console.log('transaction hash: ', txHash);
        // 获取交易的清单
         getTransactionReceipt(txHash, function(receipt) {
              console.log("tx receipt: ", receipt)
              console.log("tx status: ", receipt.status)
              console.log("contract address: ", receipt.contractAddress)
              console.log(new Date().getSeconds()+":"+new Date().getMilliseconds())
         })
      }
    });
}

// 测试用
//getaccountcertificate()
/*var name = "zgc";
var workname = "1.wav";
var timestamp = "1234567890";
var filehash = "A05AE118ACA9D80252C209B2A0A4CD0058825CBDE867A756C8733CB21E8D3566";
var ipfshash = "QmcHxt9scMKmD4xyCAmA7frg7LcAyZgF4kFnUm6DBmNZvN";
var copyrighttype = "all"; // user
var deadline //*/
//putcopyright('test001','张三','蓝天大学','男','330220200006066666','2000/06/06','计算机与信息工程学院','1066623366623366623','2018/09/01','2022/06/02','1618744255','f724b815f0b6b2929c69d13e35e44465c97d57c49bc6effee8c8be40','Qmcpo2iLBikrdf1d6QU6vXuNb6P7hwrbNPW9kLAH8eG67z','本科','正常')
//deployWasmContract();
//putcopyright(String(account.address), name, workname, timestamp, filehash, ipfshash, copyrighttype, deadline);
//console.log(vnt.core.getBalance(from1))
getaccountcertificate()


