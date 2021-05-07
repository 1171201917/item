#include "vntlib.h"

                                 
typedef struct
{
    string name;                         
    string schoolname;                     
	string sex; 			        
	string idcard;			           
	string birth; 			              
	string subject;			               
	string certificateid;	              
	string entrancetime; 	              
	string graduatetime;	              
    string timestamp;                 
    string filehash;                     
    string ipfshash;                   
    string certificatetype;                
    string deadline;                        
} cpinfo;

                              
KEY mapping(address, struct{
	uint64 nowlength;                             
        array(cpinfo) certificate;
}) UserCertificate;

                        
KEY uint64 usercounts;
KEY array(string) useraddresses;                                                                            

                        
KEY address owner;

               

void keyjs3lx53j(){
AddKeyInfo( &UserCertificate.value.certificate.value.schoolname, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.schoolname, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.schoolname, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.schoolname, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.schoolname, 6, &UserCertificate.value.certificate.value.schoolname, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.sex, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.sex, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.sex, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.sex, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.sex, 6, &UserCertificate.value.certificate.value.sex, 9, false);
AddKeyInfo( &usercounts, 4, &usercounts, 9, false);
AddKeyInfo( &owner, 7, &owner, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificatetype, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificatetype, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificatetype, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificatetype, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.certificatetype, 6, &UserCertificate.value.certificate.value.certificatetype, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.idcard, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.idcard, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.idcard, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.idcard, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.idcard, 6, &UserCertificate.value.certificate.value.idcard, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.name, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.name, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.name, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.name, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.name, 6, &UserCertificate.value.certificate.value.name, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.length, 4, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.length, 4, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.length, 4, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificateid, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificateid, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificateid, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.certificateid, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.certificateid, 6, &UserCertificate.value.certificate.value.certificateid, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.entrancetime, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.entrancetime, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.entrancetime, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.entrancetime, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.entrancetime, 6, &UserCertificate.value.certificate.value.entrancetime, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.deadline, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.deadline, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.deadline, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.deadline, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.deadline, 6, &UserCertificate.value.certificate.value.deadline, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.subject, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.subject, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.subject, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.subject, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.subject, 6, &UserCertificate.value.certificate.value.subject, 9, false);
AddKeyInfo( &useraddresses.length, 4, &useraddresses, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.birth, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.birth, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.birth, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.birth, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.birth, 6, &UserCertificate.value.certificate.value.birth, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.filehash, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.filehash, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.filehash, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.filehash, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.filehash, 6, &UserCertificate.value.certificate.value.filehash, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.ipfshash, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.ipfshash, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.ipfshash, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.ipfshash, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.ipfshash, 6, &UserCertificate.value.certificate.value.ipfshash, 9, false);
AddKeyInfo( &useraddresses.value, 6, &useraddresses, 9, false);
AddKeyInfo( &useraddresses.value, 6, &useraddresses.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.timestamp, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.timestamp, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.timestamp, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.timestamp, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.timestamp, 6, &UserCertificate.value.certificate.value.timestamp, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.graduatetime, 6, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.graduatetime, 6, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.certificate.value.graduatetime, 6, &UserCertificate.value.certificate, 9, false);
AddKeyInfo( &UserCertificate.value.certificate.value.graduatetime, 6, &UserCertificate.value.certificate.index, 4, true);
AddKeyInfo( &UserCertificate.value.certificate.value.graduatetime, 6, &UserCertificate.value.certificate.value.graduatetime, 9, false);
AddKeyInfo( &UserCertificate.value.nowlength, 4, &UserCertificate, 9, false);
AddKeyInfo( &UserCertificate.value.nowlength, 4, &UserCertificate.key, 7, false);
AddKeyInfo( &UserCertificate.value.nowlength, 4, &UserCertificate.value.nowlength, 9, false);
}
constructor $Czqq()
{
keyjs3lx53j();
InitializeVariables();
    owner = GetSender();
}

               
MUTABLE
void PutStore(string useraddr, string name, string schoolname , string sex , string idcard , string birth , string subject , string certificateid , string entrancetime , string graduatetime , string timestamp , string filehash, string ipfshash, string certificatetype, string deadline)
{
keyjs3lx53j();
                                                 
    address sender = GetSender();
    
                  
    UserCertificate.key = sender;

    if(UserCertificate.value.nowlength == 0){
        UserCertificate.value.certificate.length = 100000;                                                                                                
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

                                    
UNMUTABLE
string GetAccountInfo()
{
keyjs3lx53j();
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
	                                                                  
	result = Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(Concat(result, name), "|"), schoolname), "|"), sex),"|"), idcard),"|"), birth),"|"), subject),"|"),certificateid),"|"),entrancetime), "|"),graduatetime),"|"), timestamp), "|"), filehash), "|"), ipfshash), "|"), certificatetype), "|"), deadline), "-");
    }

                         
    PrintStr("The account's certificates: ", result);
    return result;
}

                        
UNMUTABLE
string Getalluser()
{
keyjs3lx53j();
	string result = "";
	for(uint64 i=0; i<usercounts; i++){
		useraddresses.index = i;
		result = Concat(Concat(result, useraddresses.value), "|");
	}
	return	result;
}
