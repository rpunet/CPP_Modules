/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:33:07 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 15:48:41 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string	Human::identify(void)
{
	return (this->_brain.identify());
}

Brain		&Human::getBrain(void)
{
	return (this->_brain);
}
