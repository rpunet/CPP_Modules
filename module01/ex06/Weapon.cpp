/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 19:32:49 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/13 11:08:25 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &typer): type(typer)
{
}

Weapon::~Weapon()
{
}

std::string const	&Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string const &setter)
{
	this->type = setter;
}
