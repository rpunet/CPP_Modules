/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:30:53 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 15:48:30 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"



class Human
{
	private:
		Brain	_brain;
	public:
		Human();
		~Human();

	std::string	identify(void);
	Brain		&getBrain(void);
};

#endif
