/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 11:47:11 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/09 23:48:35 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>
#include "crapbook.class.hpp"

int	main()
{
	Crapbook	agenda;
	std::string	command;
	int			i;

	i = 0;
	while (1)
	{
		getline(std::cin, command);
		if (command == "ADD")
			agenda.add_contact();
		else if (command == "SEARCH")
			agenda.search_contact();
		else if (command == "EXIT")
			break;
	}
	return (0);
}
