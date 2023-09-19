#include "Contact.hpp"

#include <iostream>

Contact::Contact(
		std::string _firstName, std::string _lastName,
		std::string _nickName, std::string _darkestSecret,
		std::string _phoneNumber): 
			firstName(_firstName),
			lastName(_lastName),
			nickName(_nickName),
			darkestSecret(_darkestSecret),
			phoneNumber(_phoneNumber) {}

Contact::Contact() {}

std::string Contact::getFirstName() {
	return firstName;
}

std::string Contact::getLastName() {
	return lastName;
}

std::string Contact::getNickName() {
	return nickName;
}

std::string Contact::getDarkestSecret() {
	return darkestSecret;
}

std::string Contact::getPhoneNumber() {
	return phoneNumber;
}

void Contact::printContact() {
	std::cout << "First name:     " << firstName << std::endl;
	std::cout << "Last name:      " << lastName << std::endl;
	std::cout << "Nickname:       " << nickName << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
	std::cout << "Phone number:   " << phoneNumber << std::endl;
}