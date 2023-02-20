#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {
	private:
		int _contactIndex;
		Contact _contact[8];

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void addContactToPhoneBook( int index );
		void showPhoneBook( void );
};

#endif