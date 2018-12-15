/*
 * Person.h
 *
 *  Created on: Dec 12, 2018
 *      Author: volcano
 */

#ifndef PERSON_H_
#define PERSON_H_

class Person {
private:
	std::string firstname;
	std::string lastname;
	std::string phone;
	std::string address;
	std::string city;
	std::string zip;

public:
	Person();
	Person(std::string n, std::string lname,
			std::string ph, std::string a,
			std::string c, std::string z);
	virtual ~Person();

	void addPerson(int count);
	void setFirstname(std::string n);
	std::string getFirstname(){
		return firstname;
	}

	void setLastname(std::string lname);
	std::string getLastname(){
		return lastname;
	}

	void setPhone(std::string ph);
	std::string getPhone(){
		return phone;
	}

	void setAddress(std::string a);
	std::string getAddress(){
		return address;
	}

	void setCity(std::string c);
	std::string setCity(){
		return city;
	}

	void setZip(std::string z);
	std::string setZip(){
		return zip;
	}


};

#endif /* PERSON_H_ */