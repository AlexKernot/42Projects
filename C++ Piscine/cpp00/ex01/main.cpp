#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

std::string getInput(std::string prompt) {
	std::cout << "Please enter: " << prompt << std::endl;

	std::string input;
	std::getline(std::cin, input);
	while (input.empty()) {
		std::cout << "Field cannot be empty. Try again" << std::endl;
		std::getline(std::cin, input);
	}
	return input;
}

// Yes yes, this calls another implicit copy constructor but again, dynamic
// allocation isn't allowed.
Contact createContact() {
	std::cout << "Creating a new contact.\n";
	std::cout << "FIELDS MUST NOT BE LEFT EMPTY." << std::endl;

	std::string firstName = getInput("First name");
	std::string lastName = getInput("Last name");
	std::string nickname = getInput("Nickname");
	std::string darkestSecret = getInput("Darkest secret");
	std::string phoneNumber = getInput("Phone number");

	return Contact(firstName, lastName, nickname, darkestSecret, phoneNumber);
}

void printContactPreview(std::string field) {
	if (field.length() > 10)
	{
		field = field.substr(0, 9);
		std::cout << field << ".|";
		return;
	}
	std::cout << std::setw(10);
	std::cout << field << "|";
}

bool stoi(std::string str, int *convert) {
	if (str.length() > 1 && isdigit(str.at(1)) == true) {
		std::cout << "Only 8 contacts can exist in the phonebook." << std::endl;
		return false;
	}
	if (str.at(0) == '-') {
		std::cout << "Index cannot be less than 0." << std::endl;
		return false;
	}
	*convert = str.at(0) - '0';
	if (*convert > 8) {
		std::cout << "Only 8 contacts can exist in the phonebook." << std::endl;
		return false;
	}
	return true;
}

void displayContacts(PhoneBook& phoneBook) {
	for (int i = 0; i < 8; ++i) {
		Contact contact = phoneBook.getContact(i);
		if (contact.getFirstName().empty() == true)
			break;
		std::cout << i << "         |";
		printContactPreview(contact.getFirstName());
		printContactPreview(contact.getLastName());
		printContactPreview(contact.getNickName());
		std::cout << std::endl;
	}
	std::cout << "Enter index to view" << std::endl;
	std::string input;
	std::getline(std::cin, input);

	int index = 0;
	if (stoi(input, &index) == false)
		return;
	if (phoneBook.getContact(index).getFirstName().empty() == true) {
		std::cout << "No contact at this index." << std::endl;
		return;
	}
	Contact contact = phoneBook.getContact(index);
	contact.printContact();
}

int main(void) {
	PhoneBook phoneBook;
	
	std::string input;
	while (1) {
		std::cout << "Enter ADD SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
			return 0;
		if (input == "ADD")
			phoneBook.addContact(createContact());
		if (input == "SEARCH")
			displayContacts(phoneBook);
	}
	return 0;
}