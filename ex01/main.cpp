#include "PhoneBook.hpp"

int	main( void ) {
	Contact contact;

	contact.setContactFromPrompt( 1 );

	contact.displayContactInfo();
}