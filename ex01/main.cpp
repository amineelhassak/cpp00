#include "Contact.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string line;

    while(1)
    {
        std::cout << "Command >> ";
        std::getline(std::cin, line);
        if (std::cin.eof())
            break ;
        if (line == "ADD")
            phonebook.addNewContact();
        else if (line == "SEARCH")
            phonebook.searchContacts();
        else if (line == "EXIT")
            exit(0);
        else if (!line.empty() || !is_all_space(line))
            std::cout << "\tInvalid command\n";
    }
}