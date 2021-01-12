/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 12:27:19 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 10:11:04 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	_type;
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string const &type);
		Zombie	*newZombie(std::string const &name);
		Zombie	*randomChump(void);

};

#endif
