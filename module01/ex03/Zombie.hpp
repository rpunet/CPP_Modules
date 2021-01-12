/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:45:10 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/12 11:58:20 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	_type;
		std::string	_name;
	public:
		Zombie(void);
		Zombie(std::string const &name);
		~Zombie(void);

		void		nameRandomZombie(void);
		void		announce(void);
};

#endif
