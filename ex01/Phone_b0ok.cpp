#include "Contact.hpp"

int PhoneBook::contactCount = 0;
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

std::string Contact::setDarkestSecret()
{
	return (darkestSecret);
}

Contact::Contact(){}

Contact::~Contact(){}

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

bool Contact::isValid() {
    return (!firstName.empty() && !lastName.empty() && !nickname.empty() && !phoneNumber.empty() && !darkestSecret.empty());
}

void PhoneBook::addNewContact()
{
	Contact		newContact;
	std::string	input;

	contactCount = 0;
	std::cout << "Veuillez entrer le prénom:";
	getline(std::cin, input);
	newContact.setFirstName(input);

	std::cout << "Veuillez entrer le nom de famille:";
	getline(std::cin, input);
	newContact.setLastName(input);

	std::cout << "Veuillez entrer le surnom:";
	getline(std::cin, input);
	newContact.setNickName(input);

	std::cout << "Veuillez entrer le numéro de téléphone:";
	getline(std::cin, input);
	newContact.setPhoneNumber(input);

	std::cout << "Veuillez entrer le secret le plus sombre:";
	getline(std::cin, input);
	newContact.setDarkest_secret(input);
	if (newContact.isValid())
	{
		if (contactCount < 8)
		{
			arry_contacts[contactCount++] = newContact;
			contactCount++;
		}
		else
		{
			for(int i = 1;i < 8;i++)
				arry_contacts[i - 1] = arry_contacts[i];
			arry_contacts[7] = newContact;
		}
		std::cout << "Contact ajouté avec succès." << std::endl;
    }
	else
        std::cout << "Erreur : tous les champs doivent être remplis." << std::endl;
}

void PhoneBook::searchContacts()
{
	int number;

	if (contactCount == 0)
	{
		std::cout << "Aucun contact enregistré." << std::endl;
        return ;
	}
	std::cout << "Veuillez entrer le numéro de contact à rechercher :";
	std::cin >> number;
	if (number < 1 || number > 8)
	{
		std::cout << "Numéro invalide. Veuillez entrer un numéro entre 1 et 8.\n";
 		return ;
	}
	std::cout << std::setw(10) << "Contact |";
	std::cout << std::setw(10) << "Prénom |";
	std::cout << std::setw(10) << "surnom |";
	std::cout << std::setw(10) << "Contact |";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (i + 1 == number)
		{
			std::cout << std::setw(10) << std::left <<(i + 1);
			std::cout << std::setw(10) << std::left << arry_contacts[i].getFirstName();
			std::cout << std::setw(10) << std::left << arry_contacts[i].getLastName();
			std::cout << std::setw(10) << std::left << arry_contacts[i].getNickName();
			break;
		}
	}
};