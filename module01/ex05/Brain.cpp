/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:26:46 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 19:26:04 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

std::string Brain::	identify(void) const
{
	std::ostringstream	getObjectAddress;
	getObjectAddress << this;
	return (getObjectAddress.str());
}
