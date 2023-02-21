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

	if (firstName.empty() && lastName.empty() && nickName.empty() ) {
		std::cout << std::endl << RED << "Hey! you can't just leave your info empty." << RES << std::endl << std::endl;
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


	contact.addContact( firstName, lastName, nickName, phoneNumber, darkestSecret );

	this->_contact[PhoneBook::_contactIndex] = contact;
	PhoneBook::_contactIndex = ( ( PhoneBook::_contactIndex + 1 ) % 8 );
}

void PhoneBook::showPhoneBook( void ) {
	Contact currentContact;

	std::cout << std::endl << "This is your Phone Book" << std::endl;

	int i = 0;
	if ( this->_contact[0].getFirstNameSub().empty() && this->_contact[0].getLastNameSub().empty() && this->_contact[0].getNickNameSub().empty() && this->_contact[0].getPhoneNumberSub().empty() && this->_contact[0].getDarkestSecret().empty() ) {
		std::cout << std::endl << RED << "No data in Phonebook" << RES << std::endl << std::endl;
		return ;
	}

	while ( i < 8 ) {
		std::string firstName = this->_contact[i].getFirstNameSub();
		std::string lastName = this->_contact[i].getLastNameSub();
		std::string nickName = this->_contact[i].getNickNameSub();
		std::string phoneNumber = this->_contact[i].getPhoneNumberSub();

		if ( i == 0 ) {
			std::cout << BHCYN << "\t ===================================================" << RES << std::endl;
			std::cout << BHCYN << "\t| " << RES << std::setw(10) << "index";
			std::cout << " | " << std::setw(10) << "first name";
			std::cout << " | " << std::setw(10) << "last name";
			std::cout << " | " << std::setw(10) << "nickname" << BHCYN << " |" << RES << std::endl;
			std::cout << BHCYN << "\t ===================================================" << RES << std::endl;
		}

		int isEmpty = this->isEmpty( firstName, lastName, nickName, phoneNumber );

		std::cout << BHCYN << "\t| " << RES << std::setw(10) << ( isEmpty ? "" : std::to_string(i) );
		std::cout << " | " << std::setw(10) << ( firstName.empty() ? "" : firstName );
		std::cout << " | " << std::setw(10) << ( lastName.empty() ? "" : lastName );
		std::cout << " | " << std::setw(10) << ( nickName.empty() ? "" : nickName ) << BHCYN << " |" << RES << std::endl;

		if ( i == 7 ) {
			std::cout << BHCYN << "\t ===================================================" << RES << std::endl;
		}

		i++;
	}

	this->getPhoneBook();
}

void PhoneBook::getPhoneBook( void ) {
	std::string index;
	std::cout << "Enter the index of the contact you want to see: ";
	if ( !std::getline( std::cin, index ) ) {
		return ;
	}
	if ( index < "0" || index > "7" ) {
		std::cout << std::endl << RED << "No SUS index in Phonebook!!" << RES << std::endl << std::endl;
		return ;
	}

	int i = 0;
	while ( i < 8 ) {
		if ( std::to_string(i) == index ) {
			if ( this->_contact[i].getFirstNameSub().empty() && this->_contact[i].getLastNameSub().empty() && this->_contact[i].getNickNameSub().empty() && this->_contact[i].getPhoneNumberSub().empty() && this->_contact[i].getDarkestSecret().empty() ) {
				std::cout << std::endl << RED << "No SUS data in Phonebook" << RES << std::endl << std::endl;
				return ;
			}
			this->_contact[i].displayContactInfo( i );
			return ;
		}
		i++;
	}

	std::cout << std::endl << RED << "No SUS index in Phonebook" << RES << std::endl << std::endl;
}

int	PhoneBook::isEmpty( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber ) {
	return ( firstName.empty() && lastName.empty() && nickName.empty() && phoneNumber.empty() );
}

int PhoneBook::_contactIndex = 0;
