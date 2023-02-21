#include "PhoneBook.hpp"

int	main( void ) {
	Contact contact;
	PhoneBook phoneBook;

	std::string input;
	while (1) {

		std::cout << std::endl << "Enter a command: " << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;

		std::cout << "> ";
		if ( !std::getline( std::cin, input ) ) {
			std::cout << std::endl << std::endl << BHRED << "Error: Failed to read input" << RES << std::endl;
			return (1);
		}

		if ( input.length() == 0 ) {
			input.clear();
			continue ;
		}

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
}
