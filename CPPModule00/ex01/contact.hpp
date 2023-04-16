/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:51:10 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/16 14:15:42 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cstring>
#include <iostream>
#include <iomanip>
#include <limits>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_number;
	size_t		index;
	std::string	get_input(std::string str) const;

public:
	void		print_contact(int index) const;
	void		contact_fields();
	void		atribute_index(int i);
	void		view(int index) const;
	std::string	w_dot(std::string str) const;
	Contact();
	~Contact();
};

#endif
