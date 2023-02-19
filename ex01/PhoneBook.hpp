#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <iostream>
# include "contact.hpp"

class PhoneBook {
	private:
		int	_contactIndex;
		Contact	contact[8];

	public:
		PhoneBook( void );
		~PhoneBook( void );


};

#endif