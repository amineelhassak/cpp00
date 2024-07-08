#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private :
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickName(std::string nickname);
		void setPhoneNumber(std::string phone_number);
		void setDarkest_secret(std::string darkest_secret);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	setDarkestSecret();
		bool		isValid();
		Contact();
		~Contact();
};

class PhoneBook
{
	private:
		Contact     arry_contacts[8];
		static int	contactCount;
	public:
		PhoneBook();
		void	addNewContact();
		void	searchContacts();
		~PhoneBook();
};

#endif
