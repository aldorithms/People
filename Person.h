#include "Date.h"


#ifndef PERSON_CLASS
#define PERSON_CLASS

#include "Date.h"
#include "PhoneNumber.h"

class Person {

private:

	std::string 			    firstname;
	std::string 			    lastname;
	unsigned short int 		    age;
	PhoneNumber 			    phonenumber;
	Date 					    birthdate;
	BankAccount                 bankaccount;

public:

	Person();
	~Person();
	void setFirstName(string&);
	std::string getFirstName();
	void setLastName(string&);
	std::string getLastName(string&);
	void setAge();
	int getAge();

}

#endif
