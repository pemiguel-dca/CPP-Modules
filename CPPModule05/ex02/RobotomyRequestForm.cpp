/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:05:16 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 15:59:03 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "RobotomyRequestForm Params constructor has been called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
: AForm(other)
{
	std::cout << "RobotomyRequestForm Copy constructor has been called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm:: operator = (const RobotomyRequestForm& other)
{
	AForm::operator=(other);
	std::cout << "RobotomyRequestForm Copy assignment operator has been called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor has been called" << std::endl;
}

void	RobotomyRequestForm::executeSpecificForm(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getSignValue())
		throw AForm::GradeTooLowException();
	else if (!this->getSignValue())
		std::cerr <<  executor.getName() << " can't execute RobotomyRequestForm because it wasn't signed!" << std::endl;
	else
	{
		std::cout << "'making drilling noises...'" << std::endl;
		std::srand(std::time(NULL));

		if (random() % 2 == 0)
			std::cout << executor.getName() << " has been robotomized!" << std::endl;
		else
			std::cout << executor.getName() << " was unlucky, " << "robotomy failed!" << std::endl;
	}
}
