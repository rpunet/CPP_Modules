/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:04:51 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/11 02:07:45 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string namer, std::string const colorize, int feed):
 _name(namer), _color(colorize), _weight(feed)
{
	std::cout << "Here is our " << this->_name << " pony constructed!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << this->_name << " pony destructed, good bye!\n" << std::endl;
}

void	Pony::show_name(void)
{
	std::cout << "   I am a " << this->_name << std::endl;
}

void	Pony::show_color(void)
{
	std::cout << "   My color is " << this->_color << std::endl;
}

int		Pony::get_weight(void) const
{
	return (this->_weight);
}

void	Pony::feed_and_grow(int meal)
{
	std::cout << "   I'm eating " << meal << " kgs." << std::endl;
	this->_weight += meal;
}
