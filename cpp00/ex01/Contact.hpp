/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 22:20:15 by amel-has          #+#    #+#             */
/*   Updated: 2024/07/19 08:58:43 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private :
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickName(std::string nickname);
		void setPhoneNumber(std::string phone_number);
		void setDarkest_secret(std::string darkest_secret);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		Contact();
		~Contact();
};


bool	is_all_space(std::string s);
#endif