/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:33:07 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 19:27:36 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string	Human::identify(void) const
{
	return (this->_brain.identify());
}

const Brain		&Human::getBrain(void) const
{
	return (this->_brain);
}
