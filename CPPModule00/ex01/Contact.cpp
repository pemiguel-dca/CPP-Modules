/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:26:10 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 17:26:07 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->index = 0;
}

Contact::~Contact()
{
}

int	Contact::get_curr_index(void)
{
	return (index);
}

std::string	Contact::get_input(std::string str) const
{
	std::string	line;

	while (true)
	{
		std::cout << str << std::endl;
		getline(std::cin, line);
		if (str == "Phone number: ")
		{
			if (line.find_first_not_of("0123456789") != std::string::npos)
			{
				std::cout << "Invalid phone number, try again!" << std::endl;
				continue ;
			}
		}
		if (std::cin.fail() && line.empty())
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cin.clear();
			clearerr(stdin);
			std::cout << "Invalid input, try again!" << std::endl;
		}
		else
			break ;

	}
	return (line);
}

void	Contact::contact_fields(void)
{
	this->first_name = this->get_input("First name: ");
	this->last_name = this->get_input("Last name: ");
	this->nickname = this->get_input("Nickname: ");
	this->phone_number = this->get_input("Phone number: ");
	this->darkest_secret = this->get_input("Your darkest secret: ");
}

void	Contact::atribute_index(int i)
{
	this->index = i;
}

std::string	Contact::w_dot(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::view(int index) const
{
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty() || this->darkest_secret.empty())
		return ;
	std::cout << std::setw(10) << index + 1 << std::endl;
	std::cout << "|" << std::setw(10) << this->w_dot(this->first_name) << std::endl;
	std::cout << "|" << std::setw(10) << this->w_dot(this->last_name) << std::endl;
	std::cout << "|" << std::setw(10) << this->w_dot(this->nickname) << std::endl;
	std::cout << "|" << std::endl;
}

void	Contact::print_contact(int index) const
{
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty() || this->darkest_secret.empty())
		return ;
	std::cout << std::endl;
	std::cout << "Contact number: " << index + 1 << std::endl;
	std::cout << "First Name:\t" << this->first_name << std::endl;
	std::cout << "Last Name:\t" << this->last_name << std::endl;
	std::cout << "Nickname:\t" << this->nickname << std::endl;
	std::cout << std::endl;
}
