#include "Contact.hpp"

Contact::Contact() {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact() {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickName = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

void Contact::setContactFromPrompt( void ) {
	std::string firstName;
	std::string lastName; 
	std::string nickName; 
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "First Name: ";
	if ( !std::getline( std::cin, firstName ) ) {
		return ;
	}

	std::cout << "Last Name: ";
	if ( !std::getline( std::cin, lastName ) ) {
		return ;
	}

	std::cout << "Nickname: ";
	if ( !std::getline( std::cin, nickName ) ) {
		return ;
	}

	std::cout << "Phone Number: ";
	if ( !std::getline( std::cin, phoneNumber ) ) {
		return ;
	}

	std::cout << "Darkest Secret: ";
	if ( !std::getline( std::cin, darkestSecret ) ) {
		return ;
	}

	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

void Contact::displayContactInfo( int index ) {
	std::cout << std::endl;
	
	std::cout << "Contact Info Id: " << index << std::endl;
	std::cout << "\t - First Name: " << this->_firstName << std::endl; 
	std::cout << "\t - Last Name: " << this->_lastName << std::endl; 
	std::cout << "\t - Nickname: " << this->_nickName << std::endl; 
	std::cout << "\t - Phone Number: " << this->_phoneNumber << std::endl; 
	std::cout << "\t - Darkest Secret: " << this->_darkestSecret << std::endl;

	std::cout << std::endl; 
}

std::string Contact::getFirstNameSub( void ) {
	return this->_firstName.substr(0, 10);
}

std::string Contact::getLastNameSub( void ) {
	return this->_lastName.substr(0, 10);
}

std::string Contact::getNickNameSub( void ) {
	return this->_nickName.substr(0, 10);
}

std::string Contact::getPhoneNumberSub( void ) {
	return this->_phoneNumber.substr(0, 10);
}

std::string Contact::getDarkestSecret( void ) {
	return this->_phoneNumber;
}
