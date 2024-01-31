#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <cctype>
#include <string>

// <---------- my classes --------->

// <------Contact-------->

class Contact
{
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        ~Contact();
};
// <------PhoneBook------>
class PhoneBook
{
    private:
        Contact     arry_contacts[8];
        static      int  index;
    public:
        PhoneBook();
        ~PhoneBook();
        int add();
        void search();
        Contact *get_arry_contact();
};

#endif
