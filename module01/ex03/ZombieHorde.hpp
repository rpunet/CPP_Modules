/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:02:14 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 11:58:20 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde
{
	private:
		int		_hordeNum;
		Zombie	*_zombies;
	public:
		ZombieHorde(int num);
		~ZombieHorde();

		void	announce(void);
};

#endif
