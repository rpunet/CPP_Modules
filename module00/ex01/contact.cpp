/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:32:40 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/10 03:10:49 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "crapbook.class.hpp"


std::string Contact::_tags[11] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"E-mail",
	"Phone number",
	"Birthday date",
	"Favorite meal",
	"Underwear color",
	"Darkest secret"
};

Contact::Contact(){}
Contact::~Contact(){}


bool	Contact::get_info(void)
{
	int		info_length;

	info_length = 0;
	for (int i = 0; i < 11; i++)
	{
		std::cout << this->_tags[i] << std::endl;
		std::getline(std::cin, this->_info[i]);
		info_length += this->_info[i].length();
	}
	if (info_length > 0)
	{
		std::cout << "####  New contact saved  ####\n" << std::endl;
		std::cout << "####  Enter option [ADD, SEARCH, EXIT]  ####" << std::endl;
		return (true);
	}
	else
	{
		std::cout << "####  No info: contact not created  ####" << std::endl;
		std::cout << "####  Enter some contact info  ####" << std::endl;
		return (false);
	}
}

void	Contact::display_available(void)
{
	for (int i = 0; i <= 2; i++)
	{
		std::cout << "|";
		if (this->_info[i].length() > 10)
			std::cout << this->_info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_info[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::display_contact_info(void)
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << this->_tags[i] << ": " << this->_info[i] << std::endl;
	}
	std::cout << "\n####  Enter option [ADD, SEARCH, EXIT]  ####" << std::endl;
}
