/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:09:47 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/01 21:17:45 by pemiguel         ###   ########.fr       */
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

Intern& Intern::operator = (const Intern& other)
{
	(void)other;
	std::cout << "Intern copy operator assignment has been called" << std::endl;
	return (*this);
}

Intern::Intern(const Intern& other)
{
	*this = other;
	std::cout << "Intern copy constructor has been called" << std::endl;
}

AForm	*Intern::makeForm(const std::string name_form, const std::string target)
{
	AForm	*res = NULL;
	t_forms	forms[] =
	{
		{"ShrubberyCreationForm", new ShrubberyCreationForm(target)},
		{"RobotomyRequestForm", new RobotomyRequestForm(target)},
		{"PresidentialPardonForm", new PresidentialPardonForm(target)},
		{"", NULL},
	};

	for (size_t i = 0; forms[i].forms; i += 1)
	{
		if (forms[i].name.compare(name_form) == 0)
		{
			std::cout << "Intern creates " << name_form << std::endl;
			res = forms[i].forms;
		}
		else
			delete forms[i].forms;
	}
	if (res == NULL)
		std::cout << "Intern was not able to find the form " << name_form << std::endl;
	return (res);
}
