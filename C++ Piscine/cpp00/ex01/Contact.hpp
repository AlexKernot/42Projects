#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;
	std::string	phoneNumber;
public:
	Contact();
	Contact(std::string _firstName, std::string _lastName,
		std::string _nickName, std::string _darkestSecret,
		std::string _phoneNumber);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getDarkestSecret();
	std::string getPhoneNumber();
	void        printContact();
};

#endif //CONTACT_HPP