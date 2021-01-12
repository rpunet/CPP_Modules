/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:12:57 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 10:09:06 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

#define	TYPES	3
#define	NUMS	4

void	thePlague(Zombie *general, Zombie *zombies[])
{
	general->announce();

	for (int z = 0; z < TYPES * NUMS; z++)
		zombies[z]->announce();
}

int		main(void)
{
	srand(time(NULL));

	ZombieEvent	theHorde;
	std::string	zombieTypes[TYPES] = {"Crawler", "Walker", "Mutant"};
	Zombie		*zombies[TYPES * NUMS];
	int			z = 0;

	std::cout << "\n### The 42-ViRus has spread ###\n" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		theHorde.setZombieType(zombieTypes[i]);
		for (int j = 0; j < NUMS; j++)
			zombies[z++] = theHorde.randomChump();
	}
	std::cout << std::endl;
	theHorde.setZombieType("Gigant Zombie");
	Zombie		general("Gigant", "General Rotten");
	std::cout << "\n### General Rotten leads zombies to invade the city ###\n" << std::endl;
	thePlague(&general, zombies);
	std::cout << "\n### The virus is unstable and kills the zombies ###\n" << std::endl;
	while (z >= 0)
		delete zombies[z--];
	std::cout << "The General is dying too!" << std::endl;
	return (0);
}
