/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:26:10 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/15 23:09:07 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_input(std::string str) const
{
	std::string	line;

	while (true)
	{
		std::cout << str << std::flush;
		std::getline(std::cin, line);
		if (std::cin.bad() && line.empty())
		{
			std::cin.clear();
			printf("Invalid input, try again!\n");
		}
		else
			break ;
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
	this->darkest_secret = this->get_input("Your darkest secret: \n");
}

void	Contact::atribute_index(int i)
{
	this->index = i;
}

std::string	Contact::w_dot(std::string str) const {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::view(int index) const {
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty() || this->darkest_secret.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->w_dot(this->first_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->w_dot(this->last_name) << std::flush;
	std::cout << "|" << std::setw(10) << this->w_dot(this->nickname) << std::flush;
	std::cout << "|" << std::endl;
}

void	Contact::print_contact(int index) const {
	if (this->first_name.empty() || this->last_name.empty() || this->nickname.empty() || this->phone_number.empty())
		return ;
	std::cout << std::endl;
	std::cout << "Contact number: " << index << std::endl;
	std::cout << "First Name:\t" << this->first_name << std::endl;
	std::cout << "Last Name:\t" << this->last_name << std::endl;
	std::cout << "Nickname:\t" << this->nickname << std::endl;
	std::cout << std::endl;
}
