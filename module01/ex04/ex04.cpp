/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:12:13 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 13:22:20 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string	&str_ref = str;

	std::cout << "  by pointer: " << *str_ptr << std::endl;
	std::cout << "by reference: " << str_ref << std::endl;
	return (0);
}
