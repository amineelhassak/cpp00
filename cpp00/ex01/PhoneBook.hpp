#ifndef PHONNBOOK_HPP
#define PHONNBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact     arry_contacts[8];
		static int	contactCount;
		static int	index;
	public:
		PhoneBook();
		void	addNewContact();
		void	searchContacts();
        std::string check(std::string,std::string);
		std::string check(std::string , std::string,int);
		~PhoneBook();
};

#endif