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

void	Contact::displayContactInfo( int index ) {
	std::cout << std::endl;
	
	std::cout << "Contact Info Id: " << index << std::endl;
	std::cout << "\t - First Name: " << this->_firstName << std::endl; 
	std::cout << "\t - Last Name: " << this->_lastName << std::endl; 
	std::cout << "\t - Nickname: " << this->_nickName << std::endl; 
	std::cout << "\t - Phone Number: " << this->_phoneNumber << std::endl; 
	std::cout << "\t - Darkest Secret: " << this->_darkestSecret << std::endl;

	std::cout << std::endl; 
}
