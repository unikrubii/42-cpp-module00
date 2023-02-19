#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "Phone Book Initialized" << std::endl;
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "Clear Phone Book" << std::endl;
}

void	PhoneBook::addContactToPhoneBook( void ) {
	this->_contact[this->_contactIndex].setContactFromPrompt();
}

void	PhoneBook::showPhoneBook( void ) {
	Contact currentContact

	std::cout << std::endl << "This is your Phone Book" << std::endl;

	for (int i = 0; this->_contact[i]; i++) {
		currentContact = this->_contact[i]
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << std::setw(10) << currentContact->_firstName.substr(0, 10) ;
		
	}
}