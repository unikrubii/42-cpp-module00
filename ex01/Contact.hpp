#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

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
		void		setContactFromPrompt( void );
		void	displayContactInfo( int index );
};

#endif