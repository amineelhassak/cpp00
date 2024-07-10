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

std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}

Contact::Contact(){}

Contact::~Contact(){}

PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

// bool Contact::isValid() {
//     return (!firstName.empty() && !lastName.empty() && !nickname.empty() && !phoneNumber.empty() && !darkestSecret.empty());
// }


bool	is_all_space(std::string s)
{
	int i = 0;
	for (;s[i] && isspace(s[i]);i++)
		;
	if (!s[i])
		return (true);
	return (false);
}

std::string PhoneBook::check(std::string input,std::string msg)
{
	if (std::cin.eof())
		exit(0);
	while (input.empty() || is_all_space(input))
	{
		std::cout << msg;
		getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	return (input);

}
void PhoneBook::addNewContact()
{
	Contact		newContact;
	std::string	input;

	contactCount = 0;

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
	if (input.empty() || is_all_space(input))
		input = PhoneBook::check(input,"Veuillez entrer le numéro de téléphone:");
	newContact.setPhoneNumber(input);
	input.clear();

	std::cout << "Veuillez entrer le secret le plus sombre:";
	getline(std::cin, input);
	if (input.empty() || is_all_space(input))
		input = PhoneBook::check(input,"Veuillez entrer le secret le plus sombre:");
	newContact.setDarkest_secret(input);
	input.clear();
	arry_contacts[contactCount % 8] = newContact;
	contactCount++;
	std::cout << "Contact ajouté avec succès." << std::endl;
}

void PhoneBook::searchContacts()
{
	int number;


	if (contactCount == 0)
	{
		std::cout << "Aucun contact enregistré." << std::endl;
        return ;
	}

	std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;


	
	std::cout << "Veuillez entrer le numéro de contact à rechercher :";
	std::cin >> number;
	if ((number < 0 || number >= 8) || number >= contactCount)
	{
		std::cout << "Numéro invalide.\n";
 		return ;
	}

	
	std::cout <<  "Prénom : ";
	std::cout << arry_contacts[number].getFirstName()<< std::endl;

	std::cout <<  "nom : ";
	std::cout << arry_contacts[number].getLastName()<< std::endl;

	std::cout <<  "surnom : ";
	std::cout << arry_contacts[number].getNickName() << "\n";

	std::cout <<  "numéro de telephone : ";
	std::cout << arry_contacts[number].getLastName()<< std::endl;

	std::cout <<  "secret : ";
	std::cout << arry_contacts[number].getDarkestSecret()<< std::endl;


};