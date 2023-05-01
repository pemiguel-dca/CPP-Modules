/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:26:35 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/01 17:06:38 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main ()
{
	Bureaucrat b1("b1", 150);
	Bureaucrat b2("b2", 1);

	std::cout << std::endl;
	ShrubberyCreationForm sc("b2");
	PresidentialPardonForm pp("b2");
	RobotomyRequestForm rr("b2");

	std::cout << std::endl;
	b2.executeForm(sc);
	sc.beSigned(b2);
	b2.executeForm(sc);
	std::cout << std::endl;
	b2.executeForm(pp);
	pp.beSigned(b2);
	b2.executeForm(pp);
	std::cout << std::endl;
	b2.executeForm(rr);
	rr.beSigned(b2);
	b2.executeForm(rr);
	std::cout << std::endl;

	try
	{
		b1.executeForm(sc);
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception" << e.what() << std::endl;
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}
