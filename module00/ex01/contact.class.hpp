/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpunet <rpunet@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 12:01:33 by rpunet            #+#    #+#             */
/*   Updated: 2021/01/10 12:38:53 by rpunet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iomanip>

class Contact
{

public:
	Contact();
	~Contact();

	bool	get_info(void);
	void	display_available(void);
	void	display_contact_info(void);

private:

	static std::string	_tags[11];
	std::string			_info[11];
};

#endif
