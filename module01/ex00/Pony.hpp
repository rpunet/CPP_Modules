/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:55:09 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/11 11:46:54 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PONY_HPP
# define	PONY_HPP

# include <iostream>
# include <string>

class Pony
{
	private:
		std::string	const 	_name;
		std::string	const 	_color;
		int					_weight;

	public:
		Pony(std::string namer, std::string const colorize, int feed);
		~Pony();

		void	show_name(void);
		void	show_color(void);
		int		get_weight(void) const;
		void	feed_and_grow(int meal);
};

#endif
