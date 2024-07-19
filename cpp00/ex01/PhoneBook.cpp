/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:20:27 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/19 09:00:15 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int PhoneBook::contactCount = 0;
int PhoneBook::index = 0;

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkest_secret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return (firstName);
}
std::string Contact::getLastName()
{
	return (lastName);
}

std::string Contact::getNickName()
{
	return (nickname);
}

std::string Contact::getPhoneNumber()
{
	return (phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}

Contact::Contact(){}

Contact::~Contact(){}

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

bool isDigit(char c) {
    return std::isdigit(static_cast<unsigned char>(c));
}

bool checkAllDigits(const std::string& str) {
	return std::find_if_not(str.begin(), str.end(), isDigit) == str.end();
}

bool	is_all_space(std::string s)
{
	int i = 0;
	for (;s[i] && std::isspace(s[i]);i++)
		;
	if (!s[i])
		return (true);
	return (false);
}

std::string PhoneBook::check(std::string input, std::string msg)
{
	if (std::cin.eof())
		exit(0);
	while (input.empty() || is_all_space(input))
	{
		if (input.empty() || is_all_space(input))
            std::cout << "Chaîne vide." << std::endl;
		std::cout << msg;
		getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	return (input);
}

std::string PhoneBook::check(std::string msg, std::string input, int n) {
    (void)n;
    if (std::cin.eof())
        exit(0);
    std::string str = input;
    while (str.empty() || is_all_space(str) || !checkAllDigits(str) || str.length() != 10) {
        if (str.empty() || is_all_space(str))
            std::cout << "Chaîne vide." << std::endl;
        else if (!checkAllDigits(str))
            std::cout << "Entrez uniquement des chiffres." << std::endl;
        else if (str.length() != 10)
            std::cout << "Veuillez entrer un nombre avec 10 chiffres : " << std::endl;
        std::cout << msg;
        getline(std::cin, str);
        if (std::cin.eof())
            exit(0);
    }
    return str;
}


void PhoneBook::addNewContact()
{
	Contact		newContact;
	std::string	input;


	std::cout << "Veuillez entrer le prénom:";
	getline(std::cin, input);
	if (input.empty() || is_all_space(input))
		input = PhoneBook::check(input,"Veuillez entrer le prénom:");
	newContact.setFirstName(input);
	input.clear();

	std::cout << "Veuillez entrer le nom de famille:";
	getline(std::cin, input);
	if (input.empty() || is_all_space(input))
		input = PhoneBook::check(input,"Veuillez entrer le nom de famille:");
	newContact.setLastName(input);
	input.clear();

	std::cout << "Veuillez entrer le surnom:";
	getline(std::cin, input);
	if (input.empty() || is_all_space(input))
		input = PhoneBook::check(input,"Veuillez entrer le surnom:");
	newContact.setNickName(input);
	input.clear();

	std::cout << "Veuillez entrer le numéro de téléphone:";
	getline(std::cin, input);
	if (input.empty() || is_all_space(input) || !checkAllDigits(input) || input.length() != 10)
		input = PhoneBook::check("Veuillez entrer le numéro de téléphone:", input, 0);
	newContact.setPhoneNumber(input);
	input.clear();

	std::cout << "Veuillez entrer le secret le plus sombre:";
	getline(std::cin, input);
	if (input.empty() || is_all_space(input))
		input = PhoneBook::check(input,"Veuillez entrer le secret le plus sombre:");
	newContact.setDarkest_secret(input);
	input.clear();
	arry_contacts[PhoneBook::contactCount % 8] = newContact;
	if (PhoneBook::index < 8)
		PhoneBook::index++;
	PhoneBook::contactCount++;
	std::cout << "Contact ajouté avec succès." << std::endl;
}

std::string get_valid_str(std::string s)
{
	if (s.size() > 10)
	{
		s.resize(10);
		s[9] = '.';
	}
	return (s);
}

std::string removeSpaces(const std::string& input) {
    
	 std::string output = input;
	int i = 0;
	while (output[i])
	{
		if (output[i] == '\t' || output[i] == '\v' || output[i] == '\r' || output[i] == '\n' || output[i] == '\f')
			output[i] = ' ';
		i++;
	}
    return output;
}

int ft_atoi(const std::string& str) {
    int i = 0;
    int sign = 1;
    double result = 0;

	if (str.empty())
		return (-1);
    while (std::isspace(str[i])) {
        i++;
    }

    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }

    while (std::isdigit(str[i])) {
        result = result * 10 + (str[i] - '0');
		if (result > INT_MAX)
			return (-1);
        i++;
    }

    return (result * sign);
}

bool check_number_search(const std::string &line,int contactCount,int *number)
{
	*number = ft_atoi(line);
	if ((*number < 0 || *number >= 8) || *number >= contactCount)	{
		return (0);
	}
	return (1);
}

void search(const std::string &input,int contactCount,int *number)
{
	if (std::cin.eof())
			exit(0);
	std::string str = input;
	while (!checkAllDigits(str) || !check_number_search(str, contactCount,number)){
			std::cout << "Numéro invalide."<<std::endl;
			std::cout << "Veuillez entrer le numéro de contact à rechercher :";
			std::cin >> str;
			if (std::cin.eof())
				exit(0);
	}
}

void PhoneBook::searchContacts()
{
	int number;
	std::string line;

	if (PhoneBook::index == 0)
	{
		std::cout << "Aucun contact enregistré." << std::endl;
        return ;
	}

	std::cout << " -------------------------------------------" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	for	(int i = 0; i < PhoneBook::index; i++)
	{
		std::cout << "|" << std :: setw(10) << std::setfill(' ') << i<<"|";
		std::cout << std :: setw(10) << removeSpaces(get_valid_str(this->arry_contacts[i].getFirstName()))<<"|";
		std::cout << std :: setw(10) <<removeSpaces(get_valid_str(this->arry_contacts[i].getLastName()))<<"|";
		std::cout << std :: setw(10) <<removeSpaces(get_valid_str(this->arry_contacts[i].getNickName()))<<"|\n";
	}
	std::cout << " ___________________________________________\n";
	std::cout << "Veuillez entrer le numéro de contact à rechercher :";
	getline(std::cin,line);
	if (!checkAllDigits(line))
		search(line, PhoneBook::index,&number);
	else if (!check_number_search(line, PhoneBook::index, &number))
		search(line, PhoneBook::index,&number);
	std::cout <<  "Prénom : ";
	std::cout << removeSpaces(arry_contacts[number].getFirstName())<< std::endl;

	std::cout <<  "nom : ";
	std::cout << removeSpaces((arry_contacts[number].getLastName()))<< std::endl;

	std::cout <<  "surnom : ";
	std::cout << removeSpaces(arry_contacts[number].getNickName()) << "\n";

	std::cout <<  "numéro de telephone : ";
	std::cout << removeSpaces(arry_contacts[number].getPhoneNumber())<< std::endl;

	std::cout <<  "secret : ";
	std::cout << removeSpaces(arry_contacts[number].getDarkestSecret())<< std::endl;
};
