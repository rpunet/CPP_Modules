/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:06:08 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 10:10:15 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string const &type, std::string const &name): _type(type), _name(name)
{
	std::cout << this->_name << " is infected and is mutating to a "
	<< this->_type << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << '<' << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiinnnssss..." << std::endl;
}
