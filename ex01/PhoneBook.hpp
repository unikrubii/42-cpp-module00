#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {
	private:
		static int _contactIndex;
		Contact _contact[8];

	public:
		PhoneBook( void );
		~PhoneBook( void );

		void addContactToPhoneBook( void );
		void showPhoneBook( void );
		int	isEmpty( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber );
		void getPhoneBook( void );
};

#endif