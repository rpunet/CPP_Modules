/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:28:34 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 11:36:56 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void	ZombieEvent::setZombieType(std::string const &type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string const &name)
{
	 Zombie	*new_zombie = new Zombie(this->_type, name);
	 return (new_zombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	std::string	initial = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string	chars = "abcdefghijklmnopqrstuvwxyz";
	std::string	name;

	name.resize(rand() % 6 + 4);
	name[0] = initial[rand() % 26];
	for (int i = 1; i < name.length(); i++)
		name[i] = chars[rand() % 26];
	return (newZombie(name));
}
