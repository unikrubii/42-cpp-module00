#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	std::cout << BHGRN << "Phone Book Opened" << RES << std::endl;
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << std::endl << YEL << "Close Phone Book" << RES << std::endl;
}

void PhoneBook::addContactToPhoneBook( void ) {
	Contact contact;
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

	if (firstName.empty() && lastName.empty() && nickName.empty() && phoneNumber.empty() && darkestSecret.empty() ) {
		return ;
	}

	contact.addContact( firstName, lastName, nickName, phoneNumber, darkestSecret );
	// contact.setContactFromPrompt();

	// if ( contact.getFirstNameSub().empty() && contact.getLastNameSub().empty() && contact.getNickNameSub().empty() && contact.getPhoneNumberSub().empty() && contact.getDarkestSecret().empty() ) {
	// 	return ;
	// }

	this->_contact[PhoneBook::_contactIndex] = contact;
	PhoneBook::_contactIndex = ( ( PhoneBook::_contactIndex + 1 ) % 8 );
}

void PhoneBook::showPhoneBook( void ) {
	std::cout << _contactIndex << std::endl;
	Contact currentContact;

	std::cout << std::endl << "This is your Phone Book" << std::endl;

	int i = 0;
	if ( this->_contact[0].getFirstNameSub().empty() && this->_contact[0].getLastNameSub().empty() && this->_contact[0].getNickNameSub().empty() && this->_contact[0].getPhoneNumberSub().empty() && this->_contact[0].getDarkestSecret().empty() ) {
		std::cout << RED << "No data in Phonebook" << RES << std::endl;
		return ;
	}

	while ( i < 8 ) {
		std::string firstName = this->_contact[i].getFirstNameSub();
		std::string lastName = this->_contact[i].getLastNameSub();
		std::string nickName = this->_contact[i].getNickNameSub();
		std::string phoneNumber = this->_contact[i].getPhoneNumberSub();

		if ( i == 0 ) {
			std::cout << BHCYN << "\t ===================================================" << RES << std::endl;
		}

		std::cout << BHCYN << "\t| " << RES << std::setw(10) << ( firstName.empty() ? "" : std::to_string(i) );
		std::cout << " | " << std::setw(10) << ( firstName.empty() ? "" : firstName );
		std::cout << " | " << std::setw(10) << ( lastName.empty() ? "" : lastName );
		std::cout << " | " << std::setw(10) << ( nickName.empty() ? "" : nickName ) << BHCYN << " |" << RES << std::endl;

		if ( i == 7 ) {
			std::cout << BHCYN << "\t ===================================================" << RES << std::endl;
		}

		i++;
	}

	std::cout << std::endl << "Enter the index of the contact you want to see" << std::endl;
}

int PhoneBook::_contactIndex = 0;
