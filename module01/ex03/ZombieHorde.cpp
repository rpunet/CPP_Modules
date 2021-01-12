/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:03:45 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 12:00:17 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num): _hordeNum(num)
{
	if (num <= 0)
		std::cout << "### More zombies please ###" << std::endl;
	else
	{
		this->_zombies = new Zombie[num];
		for (int z = 0; z < num; z++)
			_zombies[z].nameRandomZombie();
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "\n### The virus is killing the zombies ###\n" << std::endl;
	delete [] this->_zombies;
}

void	ZombieHorde::announce(void)
{
	for (int z = 0; z < this->_hordeNum; z++)
		_zombies[z].announce();
}
