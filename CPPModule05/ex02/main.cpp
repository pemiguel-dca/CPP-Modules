/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:26:35 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 16:02:53 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
	Bureaucrat	b1("First", 42);
	Bureaucrat	b2("Second", 139);

	ShrubberyCreationForm sc("First");
	RobotomyRequestForm rr("First");
	PresidentialPardonForm pp("First");

	b1.executeForm(rr);
	return (0);
}
