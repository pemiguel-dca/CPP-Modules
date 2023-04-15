/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:26:10 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/15 18:43:29 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	Contact::get_input(std::string str) const
{
	std::string	line;
	bool		valid = true;

	while (valid)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, line);
		if (std::cin.bad() && line.empty())
		{
			std::cin.clear();
			valid = false;
		}
	}
	return (line);
}

void	Contact::contact_fields(void)
{
	std::cin.ignore();
	this->first_name = this->get_input("First name: \n");
	this->last_name = this->get_input("Last name: \n");
	this->nickname = this->get_input("Nickname: \n");
	this->phone_number = this->get_input("Phone number: \n");
}

void	Contact::_index(int i)
{
	this->index = i;
}
