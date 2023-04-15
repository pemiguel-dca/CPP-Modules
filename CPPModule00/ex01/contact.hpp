/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:51:10 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/15 18:54:58 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The contact fields are: first name, last name, nickname, phone number, and
darkest secret. A saved contact can’t have empty fields.*/

#include <cstring>
#include <iostream>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_number;
	size_t		index = 0;
	std::string	get_input(std::string str) const;
	void		_index(int i);

public:
	void		contact_fields();
	Contact();
	~Contact();
};

