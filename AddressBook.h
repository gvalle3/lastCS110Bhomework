/*
 * AddressBook.h
 *
 *  Created on: Dec 13, 2018
 *      Author: volcano
 */

#ifndef ADDRESSBOOK_H_
#define ADDRESSBOOK_H_

#include "Person.h"

class AddressBook : public Person {
private:
	int contactCount;
public:
	AddressBook();
	virtual ~AddressBook();


	int AddressBookMenu();
	int getcontactCount(){
		return contactCount; //count all the people in the address book
	}

	void addPerson(int ccount, Person& newContact); // add person to addressbook
	void editPerson(); //using person attributes
	void save(std::ofstream& of, Person& newContact);
	//bool removePerson(); //using first name match
	//bool removePerson(); //using first and last name
};

#endif /* ADDRESSBOOK_H_ */
