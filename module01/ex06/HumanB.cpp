/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:54:10 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 22:06:35 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB()
// {
// }

HumanB::HumanB(std::string name):_name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if(this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon!" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
//by passing the &weapon reference, then I assign the original weapon address to the *_weapon pointer
//if I pass weapon value, then I assign to *_weapon the address of a copy of weapon wich is created for the function
