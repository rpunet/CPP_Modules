/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crapbook.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:35:36 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/10 13:12:54 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "crapbook.class.hpp"

Crapbook::Crapbook()
{
	this->_nb_contacts = 0;
	std::cout << "\n     -------------------------------" << std::endl;
	std::cout << "     |          CRAPBOOK:          |\n     | Your Personal Crappy Agenda |" << std::endl;
	std::cout << "     -------------------------------\n"<< std::endl;

	std::cout << "####  Enter option [ADD, SEARCH, EXIT]  ####" << std::endl;
}

Crapbook::~Crapbook()
{
}

void	Crapbook::add_contact(void)
{
	if (this->_nb_contacts < 8)
	{
		if (_contacts[this->_nb_contacts].get_info())
			this->_nb_contacts++;
	}
	else
	{
		std::cout << "####  Your CRAPBOOK is full of... contacts  ####" << std::endl;
		std::cout << "####  Enter option [SEARCH, EXIT]  ####" << std::endl;
	}
}

void	Crapbook::search_contact(void)
{
	int	index;

	if (this->_nb_contacts == 0)
	{
		std::cout << "####  Add contacts first  ####" << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;
	for (int i = 0; i < _nb_contacts; i++)
	{
		std::cout << std::setw(10) << i + 1;
		_contacts[i].display_available();
	}
	std::cout << "\n####  Enter an index or 0 to exit ####" << std::endl;
	std::cin >> index;
	while (std::cin.fail() || index < 0 || index > this->_nb_contacts)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout << "####  Not a valid index ####" << std::endl;
		std::cout << "####  Enter an index or 0 to exit ####" << std::endl;
		std::cin >> index;
	}
	if (index != 0)
		_contacts[index - 1].display_contact_info();
	else
		std::cout << "####  Enter option [ADD, SEARCH, EXIT]  ####" << std::endl;
}

