#include "PhoneBook.hpp"

int	main( void ) {
	Contact contact;
	PhoneBook phoneBook;

	std::string input;
	while (1) {

		std::cout << "Enter a command: " << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;

		std::cout << "> ";
		std::cin >> input;
		// if ( input.c_str() == NULL ) {
		// 	continue ;
		// }

		if ( input == "EXIT" || input == "3" ) {
			break;
		}
		else if ( input == "SEARCH" || input == "search" || input == "2" ) {
			phoneBook.showPhoneBook();
		}
		else if ( input == "ADD" || input == "add" || input == "1" ) {
			phoneBook.addContactToPhoneBook();
		}
		else {
			std::cout << std::endl << BHRED << "Invalid Command!!" << RES << std::endl << std::endl;
		}
		
		input.clear();
	}


	// contact.displayContactInfo(0);
	// contact.displayContactInfo();
}
