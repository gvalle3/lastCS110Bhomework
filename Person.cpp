/*
 * Person.cpp
 *
 *  Created on: Dec 12, 2018
 *      Author: volcano
 */
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


void Person::setFirstname(std::string n){
	firstname = n;
}

void Person::setLastname(std::string lname){
	lastname = lname;
}

void Person::setPhone(std::string ph){
	phone = ph;
}

void Person::setAddress(std::string a){
	address = a;
}

void Person::setCity(std::string c){
	city = c;
}

void Person::setZip(std::string z){
	zip = z;
}
Person::Person(){
	cout << "Person constructor\n";
}
Person::Person(std::string n, std::string lname,
		std::string ph, std::string a,
		std::string c, std::string z){
	firstname = n;
	lastname = lname;
	phone = ph;
	address = a;
	city = c;
	zip = z;

}
void Person::addPerson(int count) {
	// TODO Auto-generated constructor stub
	string n;
	cout << "Input first name:";
	cin >>n;
	setFirstname(n);

	string lname;
	cout << "Input last name:" ;
	cin>>lname;
	setLastname(lname);

	string ph;
	cout << "Input phone number:";
	cin>>ph;
	setPhone(ph);

	string a;
	cout << "Input address with no spaces:";
	cin >> a;
	setAddress(a);

	string  c;
	cout << "Input city:";
	cin>>c;
	setCity(c);

	string z;
	cout << "Input zipcode:";
	cin>>z;
	setZip(z);


}

Person::~Person() {
	// TODO Auto-generated destructor stub
}
