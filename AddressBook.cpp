/*
 * AddressBook.cpp
 *
 *  Created on: Dec 13, 2018
 *      Author: volcano
 * notes: menu choice 1: continue and save to file
 * set address to char string
 *
 */
#include <iostream>
#include <string>
#include <fstream>
#include "AddressBook.h"
#include "Person.h"

using namespace std;

void AddressBook::save(ofstream& of, Person& newContact){
	string fname = newContact.getFirstname();
	of.close();
}
void AddressBook::addPerson(int ccount, Person& newContact) //: Person()
{
	newContact.addPerson(ccount);
	contactCount += ccount;
}

void AddressBook::editPerson() {
	cout << "Pase";
}

int AddressBook::AddressBookMenu()
{
	cout << "Welcome to Addressbook\n";
	cout << "Addressbook Menu Options:\n";
	cout << "1. Add Contact\n";
	cout << "2. Count Contacts\n";
	cout << "3. Edit Contact\n";
	int choice;
	cout << "Type Menu Option Number: ";
	cin >> choice;
	bool menuReturn;
	if (choice == 1)
	{
		Person newContact;
		addPerson(choice, newContact);
		ofstream contactList;
		contactList.open("Contacts.dat", ios::binary | ios::app);
		save(contactList, newContact);
	}
	if (choice == 2)
	{
		contactCount = 0;
		cout << "You have " << getcontactCount() << " contact(s)\n";
	}
	if (choice ==3)
	{
		string fname;
		cout << "Input first name: ";
		cin >> fname;
		string lname;
		cout << "Input last name: ";
		cin >> lname;
		editPerson();
	}
	return choice;
}
AddressBook::AddressBook() {
	// TODO Auto-generated constructor stub
	cout << "Addressbook constructor" << endl;
}

AddressBook::~AddressBook() {
	// TODO Auto-generated destructor stub
}