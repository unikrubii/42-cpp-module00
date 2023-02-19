#include "Contact.hpp"

Contact::Contact() {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";

	std::cout << "Contact Initialized" << std::endl;
}

Contact::~Contact() {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";

	std::cout << "Contact Reset" << std::endl;
}

void	Contact::setContactFromPrompt( void ) {
	std::cout << "First Name: ";
	std::cin >> this->_firstName;

	std::cout << "Last Name: ";
	std::cin >> this->_lastName;

	std::cout << "Nickname: ";
	std::cin >> this->_nickName;

	std::cout << "Phone Number: ";
	std::cin >> this->_phoneNumber;

	std::cout << "Darkest Secret: ";
	std::cin >> this->_darkestSecret;
}
