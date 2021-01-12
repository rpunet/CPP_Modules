/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:04:03 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 21:56:34 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;  // pointer; or both atributes must be initialized

	public:
		//HumanB();
		HumanB(std::string name);
		~HumanB();

		void		attack();
		void		setWeapon(Weapon &weapon);
};

#endif
