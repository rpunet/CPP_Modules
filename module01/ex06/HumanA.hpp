/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:00:54 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/13 11:12:29 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string const	_name;
		Weapon				&_weapon;

	public:
		HumanA(std::string const &name, Weapon &weapon);
		~HumanA();

		void		attack() const;
};

#endif
