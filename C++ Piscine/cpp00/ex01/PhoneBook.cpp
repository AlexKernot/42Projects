#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}

void PhoneBook::addContact(const Contact contact) {
	phoneBook[phoneBookSize % maxPhoneBookSize] = contact;
	phoneBookSize++;
}

Contact PhoneBook::getContact(const int index) {
	return (phoneBook[index % maxPhoneBookSize]);
}