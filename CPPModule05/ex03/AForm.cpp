/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:37:26 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 12:45:25 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : sign(false), gradeToSign(0), gradeToExecute(0)
{
	std::cout << "AForm default constructor has been called" << std::endl;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute, const std::string target)
:name (name), sign(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) , target(target)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm params constructor has been called" << std::endl;
}

AForm::AForm(const AForm& other)
: name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	/*Since we have 'const int' variables they will stay unitialized even if we use the copy operator asignment
	so in this case we use the initializer list
	*/
	std::cout << "AForm Copy constructor has been called" << std::endl;
}


AForm::~AForm()
{
	std::cout << "AForm default destructor has been called" << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
	sign = other.sign;
	const_cast<std::string&>(name) = other.name;
	const_cast<int&>(gradeToSign) = other.gradeToSign;
	const_cast<int&>(gradeToExecute) = other.gradeToExecute;

	std::cout << "AForm copy assignment operator has been called" << std::endl;
	return (*this);
}

int	AForm::getGradeExecute() const
{
	return (this->gradeToExecute);
}

int	AForm::getGradeSign() const
{
	return (this->gradeToSign);
}

const std::string&	AForm::getName() const
{
	return (this->name);
}

bool	AForm::getSignValue() const
{
	return (this->sign);
}

const std::string&	AForm::getTarget() const
{
	return (this->target);
}

std::ostream &operator << (std::ostream& stream, const AForm& other)
{
	stream << "Form name: " << other.getName() << std::endl;
	stream << "Grade to sign: " << other.getGradeSign() << std::endl;
	stream << "Grade to execute: " << other.getGradeExecute() << std::endl;
	return (stream);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign || bureaucrat.getGrade() > this->gradeToSign)
	{
		throw AForm::GradeTooLowException();
		return ;
	}
	this->sign = true;
}

void	AForm::execute(Bureaucrat const& executor) const
{
	this->executeSpecificForm(executor);
}
