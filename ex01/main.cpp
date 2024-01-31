#include "header.hpp"

int main()
{
    std::string str = "";
    PhoneBook phonebook;

    while (1)
    {
        std::cout << "Entre You're Commande : "<< std::endl; 
        std::cin >> str;
        if (str == "ADD")
            phonebook.add();
        else if (str == "SEARCH")
            phonebook.search();
        else  if(str == "EXIT")
            return (0);
    }
}