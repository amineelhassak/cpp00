#include "header.hpp"

Contact::Contact(){}//Constructor Contact
Contact::~Contact(){}//Destructore Contact
PhoneBook::PhoneBook(){}//Constructor PhoneBook
PhoneBook::~PhoneBook(){}//Destructore PhoneBook

Contact *PhoneBook::get_arry_contact(){
    return (arry_contacts);
}

int PhoneBook::add(){
    if (index == 8)
        index = 0;
    std::cout << "Please enter the first name of the new contact :" << std::endl;
    std::cin >> arry_contacts[index].first_name << std::endl;
    std::cout << "Next, provide the last name of the new contact :" << std::endl;
    std::cin >> arry_contacts[index].last_name << std::endl;;
    std::cout << "What nickname would you like to assign to this contact?" << std::endl;
    std::cin >> arry_contacts[index].nickname << std::endl;;
    std::cout << "Enter the phone number for the new contact :" << std::endl;
    std::cin >> arry_contacts[index].phone_number << std::endl;;
    std::cout << "Lastly, share the darkest secret associated with this contact :" << std::endl;
    std::cin >> arry_contacts[index].darkest_secret << std::endl;;
    index++;
}

// void PhoneBook::search(){
//     printf("search\n");
// }
