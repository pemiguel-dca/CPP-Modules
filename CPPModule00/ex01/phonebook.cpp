/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:47:49 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/16 14:41:23 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

size_t	how_many_contacts(size_t i)
{
	return (i);
}

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::requirements(void) const
{
	std::cout << "Welcome to the 80's PhoneBook!" <<std::endl;
	std::cout << "Here's are the following instructions:" << std::endl;
	std::cout << "'ADD' -> to add a new contact." << std::endl;
	std::cout << "'SEARCH' -> displays a specif contact." << std::endl;
	std::cout << "'EXIT' -> exits the program." << std::endl;
}

void	Phonebook::add_contact(void)
{
	static size_t	i = 0;

	if (i == 8)
		i = 0;
	this->contacts[i].contact_fields();
	this->contacts[i].atribute_index(i);
	i += 1;
}

size_t		Phonebook::read_index(void)
{
	size_t	index = -1;

	while (true)
	{
		std::cout << "Which contact would you like to see? " << std::flush;
		std::cin >> index;
		if (std::cin.good() && (index >= 0 && index <= 8))
			break ;
		else if (std::cin.eof())
		{
			std::cout << "EOF";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			//std::cout << "Invalid index, try again." << std::endl;
		}
	}
	return (index);
}

void	Phonebook::search()
{
	this->contacts[this->read_index()].print_contact(this->read_index());
}