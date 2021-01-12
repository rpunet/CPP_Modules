/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:06:58 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 12:00:26 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#define NUM	5

int	main(void)
{
	std::cout << "\n### The 42-ViRus has spread again###\n" << std::endl;
	ZombieHorde	horde(NUM);

	std::cout << "### The zombies are coming! ###\n" << std::endl;
	horde.announce();
	return (0);
}
