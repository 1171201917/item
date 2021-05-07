#include "vntlib.h"

// 每个证书信息的结构体
typedef struct
{
    string name;          // 证书姓名
    string schoolname;      // 学校名称
	string sex; 			//性别
	string idcard;			//身份证
	string birth; 			//出生日期
	string subject;			//专业|学院
	string certificateid;	//证书编号
	string entrancetime; 	//入学时间
	string graduatetime;	//毕业时间
    string timestamp;     // 时间戳
    string filehash;      // 文件哈希
    string ipfshash;      // IPFS地址
    string certificatetype; // 版权类型
    string deadline;      // 截止时间   
} cpinfo;

// 用户的证书信息情况
KEY mapping(address, struct{
	uint64 nowlength;     // 已有的证书数量
        array(cpinfo) certificate;
}) UserCertificate;

// 系统的全部用户
KEY uint64 usercounts;
KEY array(string) useraddresses; // 系统的全部用户, 可以通过用户地址获取ipfshash与filehash

// 部署合约的地址
KEY address owner;

// 构造函数
constructor $Czqq()
{
    owner = GetSender();
}

// 存储数据
MUTABLE
void PutStore(string useraddr, string name, string schoolname , string sex , string idcard , string birth , string subject , string certificateid , string entrancetime , string graduatetime , string timestamp , string filehash, string ipfshash, string certificatetype, string deadline)
{
    // 获取执行该方法交易的用户地址
    address sender = GetSender();
    
    //存储数据
    UserCertificate.key = sender;

    if(UserCertificate.value.nowlength == 0){
        UserCertificate.value.certificate.length = 100000; //初始化，每个人最多100000件证书（因为不知道有什么限制，先定100000）
        UserCertificate.value.certificate.index = UserCertificate.value.nowlength;        
        UserCertificate.value.certificate.value.name = name;
        UserCertificate.value.certificate.value.schoolname = schoolname;
		UserCertificate.value.certificate.value.sex = sex;
		UserCertificate.value.certificate.value.idcard = idcard;
		UserCertificate.value.certificate.value.birth = birth;
		UserCertificate.value.certificate.value.subject = subject;
		UserCertificate.value.certificate.value.certificateid = certificateid;
		UserCertificate.value.certificate.value.entrancetime = entrancetime;
		UserCertificate.value.certificate.value.graduatetime = graduatetime;
        UserCertificate.value.certificate.value.timestamp = timestamp;
        UserCertificate.value.certificate.value.filehash = filehash;
        UserCertificate.value.certificate.value.ipfshash = ipfshash;
        UserCertificate.value.certificate.value.certificatetype = certificatetype;
        UserCertificate.value.certificate.value.deadline = deadline;
	UserCertificate.value.nowlength = UserCertificate.value.nowlength + 1;
    }else{
        UserCertificate.value.certificate.index = UserCertificate.value.nowlength;        
        UserCertificate.value.certificate.value.name = name;
        UserCertificate.value.certificate.value.schoolname = schoolname;
		UserCertificate.value.certificate.value.sex = sex;
		UserCertificate.value.certificate.value.idcard = idcard;
		UserCertificate.value.certificate.value.birth = birth;
		UserCertificate.value.certificate.value.subject = subject;
		UserCertificate.value.certificate.value.certificateid = certificateid;
		UserCertificate.value.certificate.value.entrancetime = entrancetime;
		UserCertificate.value.certificate.value.graduatetime = graduatetime;
        UserCertificate.value.certificate.value.timestamp = timestamp;
        UserCertificate.value.certificate.value.filehash = filehash;
        UserCertificate.value.certificate.value.ipfshash = ipfshash;
        UserCertificate.value.certificate.value.certificatetype = certificatetype;
        UserCertificate.value.certificate.value.deadline = deadline;
	UserCertificate.value.nowlength = UserCertificate.value.nowlength + 1;
    }
    // 存储系统用户
    if(usercounts == 0){
	useraddresses.length = 100;
	useraddresses.index = usercounts;
	useraddresses.value = useraddr;
	usercounts = usercounts + 1;
    }else{
	useraddresses.index = usercounts;
	useraddresses.value = useraddr;
	usercounts = usercounts + 1;
    }
}

// 查询单个用户的所有证书
UNMUTABLE
string GetAccountInfo()
{
    string name = "";
    string schoolname = "";
	string sex = "";
	string birth = "";
	string idcard = "";
	string subject = "";
	string certificateid = "";
	string entrancetime = "";
	string graduatetime = "";
    string timestamp = "";
    string filehash = "";
    string ipfshash = "";
    string certificatetype = "";
    string deadline = "";
    
    string result = "";

    UserCertificate.key = GetSender();
    uint64 nowlength = UserCertificate.value.nowlength;

    for(uint64 i=0; i<nowlength; i++){
	UserCertificate.value.certificate.index = i;
	name = UserCertificate.value.certificate.value.name;
	schoolname = UserCertificate.value.certificate.value.schoolname;
	sex = UserCertificate.value.certificate.value.sex;
	idcard = UserCertificate.value.certificate.value.idcard;
	birth = UserCertificate.value.certificate.value.birth;
	subject = UserCertificate.value.certificate.value.subject;
	certificateid = UserCertificate.value.certificate.value.certificateid;
	entrancetime = UserCertificate.value.certificate.value.entrancetime;
	graduatetime = UserCertificate.value.certificate.value.graduatetime;
	timestamp = UserCertificate.value.certificate.value.timestamp;
	filehash = UserCertificate.value.certificate.value.filehash;
	ipfshash = UserCertificate.value.certificate.value.ipfshash;
	certificatetype = UserCertificate.value.certificate.value.certificatetype;
	deadline = UserCertificate.value.certificate.value.deadline;
	// 以|分割每一个字段,以-分割同一用户不同的证书
	result = Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(result, name), "|"), schoolname), "|"), sex),"|"), idcard),"|"), birth),"|"), subject),"|"),certificateid),"|"),entrancetime), "|"),graduatetime),"|"), timestamp), "|"), filehash), "|"), ipfshash), "|"), certificatetype), "|"), deadline), "-");
    }

    // 拼接成字符串
    PrintStr("The account's certificates: ", result);
    return result;
}

// 返回所有的用户
UNMUTABLE
string Getalluser()
{
	string result = "";
	for(uint64 i=0; i<usercounts; i++){
		useraddresses.index = i;
		result = Concat(Concat(result, useraddresses.value), "|");
	}
	return	result;
}
