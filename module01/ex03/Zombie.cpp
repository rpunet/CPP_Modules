/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:06:08 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 11:58:20 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie( std::string const &name):  _name(name)
{
	std::cout << this->_name << " is infected with the virus"
	<< this->_type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died." << std::endl;
}

void	Zombie::nameRandomZombie(void)
{
	std::string	initial = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string	chars = "abcdefghijklmnopqrstuvwxyz";
	std::string	name;

	name.resize(rand() % 6 + 4);
	name[0] = initial[rand() % 26];
	for (int i = 1; i < name.length(); i++)
		name[i] = chars[rand() % 26];

	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << '<' << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiinnnssss..." << std::endl;
}
