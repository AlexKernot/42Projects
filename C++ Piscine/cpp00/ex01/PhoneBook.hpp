#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
	static const size_t maxPhoneBookSize = 8;
	// Yes I know this calls an implicit copy constructor and you should store
	// a pointer to Contact but dynamic allocation isn't allowed soooooo....
	Contact phoneBook[maxPhoneBookSize];
	size_t	phoneBookSize;

public:
	PhoneBook();
	void addContact(Contact contact);
	Contact getContact(int index);
};

# endif //PHONE_BOOK_HPP