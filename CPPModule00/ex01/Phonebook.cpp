/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:47:49 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 17:24:09 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
	std::cout << "'SEARCH' -> displays a specific contact." << std::endl;
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

int		Phonebook::read_index(void)
{
	int	index = -1;

	while (true)
	{
		std::cout << "Which contact would you like to see? ";
		std::cin >> index;
		if (std::cin.good() && (index > 0 && index <= 8))
		{
			if (index > this->contacts->get_curr_index() + 1)
				index = -1;
			break ;
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			clearerr(stdin);
			std::cout << "Invalid contact, try again." << std::endl;
		}
	}
	return (index);
}

void	Phonebook::view_contacts(void) const {
	std::cout << "Available Contacts" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->contacts[i].view(i);
	std::cout << std::endl;
}

void	Phonebook::search()
{
	int i = this->read_index() - 1;
	if (i == -2)
	{
		std::cout << "Contact not available!" << std::endl;
		return ;
	}
	this->contacts[i].print_contact(i);
}
