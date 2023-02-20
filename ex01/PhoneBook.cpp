#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << BHGRN << "Phone Book Opened" << RES << std::endl;
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << std::endl << YEL << "Close Phone Book" << RES << std::endl;
}

void PhoneBook::addContactToPhoneBook( int index ) {
	Contact contact;

	contact.setContactFromPrompt();

	if ( contact.getFirstNameSub().empty() && contact.getLastNameSub().empty() && contact.getNickNameSub().empty() && contact.getPhoneNumberSub().empty() && contact.getDarkestSecret().empty() ) {
		return ;
	}

	this->_contactIndex = index;
	this->_contact[index] = contact;
}

void PhoneBook::showPhoneBook( void ) {
	Contact currentContact;

	std::cout << std::endl << "This is your Phone Book" << std::endl;

	int i = 0;
	if ( this->_contact[0].getFirstNameSub() == "" ) {
		std::cout << RED << "No data in Phonebook" << RES << std::endl;
		return ;
	}

	while ( i < 8 ) {
		std::string firstName = this->_contact[i].getFirstNameSub();
		std::string lastName = this->_contact[i].getLastNameSub();
		std::string nickName = this->_contact[i].getNickNameSub();
		std::string phoneNumber = this->_contact[i].getPhoneNumberSub();

		if ( i == 0 ) {
			std::cout << MAG << "\t ===================================================" << RES << std::endl;
		}

		std::cout << MAG << "\t| " << RES << std::setw(10) << ( firstName.empty() ? "" : std::to_string(i) );
		std::cout << " | " << std::setw(10) << ( firstName.empty() ? "" : firstName );
		std::cout << " | " << std::setw(10) << ( lastName.empty() ? "" : lastName );
		std::cout << " | " << std::setw(10) << ( nickName.empty() ? "" : nickName ) << MAG << " |" << RES << std::endl;

		if ( i == 7 ) {
			std::cout << MAG << "\t ===================================================" << RES << std::endl;
		}

		i++;
	}

	std::cout << std::endl << "Enter the index of the contact you want to see" << std::endl;
}
