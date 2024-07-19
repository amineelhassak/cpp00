/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:20:20 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/19 08:59:51 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook   phonebook;
    std::string line;

    std::cout<< "\t \t \vBienVenue\n\n";
    while(1)
    {
        std::cout << ">> ";
        std::getline(std::cin, line);
        if (std::cin.eof())
            break ;
        if (!is_all_space(line))
        {
            if (line == "ADD")
                phonebook.addNewContact();
            else if (line == "SEARCH")
                phonebook.searchContacts();
            else if (line == "EXIT")
                exit(0);
            else
                std::cout << "\tInvalid command\n";
        }
    }
}