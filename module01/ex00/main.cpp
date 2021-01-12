/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:04:52 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/11 02:07:44 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*heapy_pony = new Pony("Heapy", "white", 500);

	heapy_pony->show_name();
	heapy_pony->show_color();
	std::cout << "   I weight " << heapy_pony->get_weight() << std::endl;
	heapy_pony->feed_and_grow(15);
	std::cout << "   Now I weight " << heapy_pony->get_weight() << " and I'm happy" << std::endl;

	delete heapy_pony;
}

void	ponyOnTheStack(void)
{
	Pony	stacky_pony("Stacky", "brown", 480);

	stacky_pony.show_name();
	stacky_pony.show_color();
	std::cout << "   I weight " << stacky_pony.get_weight() << std::endl;
	stacky_pony.feed_and_grow(15);
	std::cout << "   Now I weight " << stacky_pony.get_weight() << " and I'm happy" << std::endl;

}

int		main(void)
{
	std::cout << " ### Bring me a pony on the Heap! ###" << std::endl;
	ponyOnTheHeap();
	std::cout << " ### Bring me a pony on the Stack! ###" << std::endl;
	ponyOnTheStack();
	return (0);
}
