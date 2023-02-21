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

void Contact::addContact( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret ) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

void Contact::displayContactInfo( int index ) {
	std::cout << std::endl;
	
	std::cout << "Contact Info Index: " << GRN << index << RES << std::endl;
	std::cout << "\t - First Name: " << CYN << this->_firstName << RES << std::endl; 
	std::cout << "\t - Last Name: " << CYN << this->_lastName << RES << std::endl; 
	std::cout << "\t - Nickname: " << CYN << this->_nickName << RES << std::endl; 
	std::cout << "\t - Phone Number: " << CYN << this->_phoneNumber << RES << std::endl; 
	std::cout << "\t - Darkest Secret: " << CYN << this->_darkestSecret << RES << std::endl;

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
