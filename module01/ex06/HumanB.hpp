/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:04:03 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/13 12:06:29 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string const	_name; // pointer; or both atributes must be initialized.
		Weapon const		*_weapon; // the pointed data cannot be written using the pointer (not the variable, wich can be or not const)

	public:
		HumanB(std::string const &name);
		~HumanB();

		void		attack() const;
		void		setWeapon(Weapon const &weapon);
};

#endif
