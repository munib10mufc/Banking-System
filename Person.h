#ifndef Person_h
#define Person_h
#include <string>
using namespace std;


class Person
{
	int id;
	string cnic;
	string name;
	int age;
	string address;
	string phoneNo;
	string mobileNo;
public:
	Person(int id = 0, string c = "", string n = "", int a = 0, string ad = "", string p = "", string m = "");
	void setCNIC(string );
	void setAge(int );
	void setName(string );
	void setAddress(string );
	void setPhoneNo(string );
	void setMobileNo(string );
	void setId(int);
	string getCNIC();
	int getAge();
	int getId();
	string getName();
	string getAddress();
	string getPhoneNo();
	string getMobileNo();
	~Person();



};
#endif