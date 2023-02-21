#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include "color.hpp"

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

	public:
		Contact( void );
		~Contact( void );

		void setContactFromPrompt( void );
		void displayContactInfo( int index );
		void addContact( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret );

		std::string getFirstNameSub( void );
		std::string getLastNameSub( void );
		std::string getNickNameSub( void );
		std::string getPhoneNumberSub( void );
		std::string getDarkestSecret( void );
};

#endif