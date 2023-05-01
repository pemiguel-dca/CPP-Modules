/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:09:47 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/01 17:39:04 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor has been called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern default destructor has been called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	std::cout << "Intern copy constructor has been called" << std::endl;
}

AForm	*Intern::makeForm(const std::string name_form, const std::string target)
{
	t_forms	forms[] =
	{
		{"ShrubberyCreationForm", new ShrubberyCreationForm(target)},
		{"RobotomyRequestForm", new RobotomyRequestForm(target)},
		{"PresidentialPardonForm", new PresidentialPardonForm(target)},
		{"", NULL},
	};

	for (size_t i = 0; forms[i].forms != NULL; i += 1)
	{
		if (forms[i].name.compare(name_form) == 0)
		{
			
		}
	}
}
