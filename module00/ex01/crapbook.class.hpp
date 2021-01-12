/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crapbook.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:32:10 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/10 12:45:43 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRAPBOOK_CLASS_HPP
# define CRAPBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
# include "contact.class.hpp"

class Crapbook
{
private:
	Contact	_contacts[8];
	int		_nb_contacts;
public:
	Crapbook();
	~Crapbook();

	void	add_contact(void);
	void	search_contact(void);
};

#endif
