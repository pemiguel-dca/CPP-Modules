/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:07:22 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 15:56:58 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5, target)
{
	std::cout << "PresidentialPardonForm Params constructor has been called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
: AForm(other)
{
	std::cout << "PresidentialPardonForm Copy constructor has been called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm:: operator = (const PresidentialPardonForm& other)
{
	AForm::operator=(other);
	std::cout << "PresidentialPardonForm Copy assignment operator has been called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor has been called" << std::endl;
}

void	PresidentialPardonForm::executeSpecificForm(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getSignValue())
		throw AForm::GradeTooLowException();
	else if (!this->getSignValue())
		std::cerr <<  executor.getName() << " can't execute RobotomyRequestForm because it wasn't signed!" << std::endl;
	else
		std::cout << executor.getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
