/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:37:26 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 22:29:40 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : sign(false), gradeToSign(0), gradeToExecute(0)
{
	std::cout << "Form default constructor has been called" << std::endl;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
:name (name), sign(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form params constructor has been called" << std::endl;
}

Form::Form(const Form& other)
: name(other.name), sign(other.sign), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	/*Since we have 'const int' variables they will stay unitialized even if we use the copy operator asignment
	so in this case we use the initializer list 
	*/
	std::cout << "Form Copy constructor has been called" << std::endl;
}


Form::~Form()
{
	std::cout << "Form default destructor has been called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
	sign = other.sign;
	const_cast<std::string&>(name) = other.name;
	const_cast<int&>(gradeToSign) = other.gradeToSign;
	const_cast<int&>(gradeToExecute) = other.gradeToExecute;
	
	std::cout << "Form copy assignment operator has been called" << std::endl;
	return (*this);
}

int	Form::getGradeExecute() const
{
	return (this->gradeToExecute);
}

int	Form::getGradeSign() const
{
	return (this->gradeToSign);
}

const std::string&	Form::getName() const
{
	return (this->name);
}

bool	Form::getSignValue() const
{
	return (this->sign);
}

std::ostream &operator << (std::ostream& stream, const Form& other)
{
	stream << "Form name: " << other.getName() << std::endl;
	stream << "Grade to sign: " << other.getGradeSign() << std::endl;
	stream << "Grade to execute: " << other.getGradeExecute() << std::endl;
	return (stream);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign || bureaucrat.getGrade() > this->gradeToSign)
	{
		throw Form::GradeTooLowException();
		return ;
	}
	this->sign = true;
}