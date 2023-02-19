#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << "Phone Book Initialized" << std::endl;
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}
