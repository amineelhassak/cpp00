#include "Contact.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string line;

    while(1)
    {
        std::getline(std::cin, line);
        if (line == "ADD")
            phonebook.addNewContact();
        else if (line == "SEARCH")
            phonebook.searchContacts();
        else if (line == "EXIT")
            exit(0);
    }
}