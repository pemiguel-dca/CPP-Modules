/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:31:04 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 15:36:08 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor has been called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default destructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade)
{
	/*'try' will throw something to 'catch' and catch calls the respective exception*/
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat Params constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;

	std::cout << "Bureaucrat Copy constructor has been called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.grade;
	const_cast<std::string&>(name) = other.name;
	// The const members cannot be assigned directly, so you need to use a const_cast to remove the 'constness'
	std::cout << "Copy assignment operator has been called" << std::endl;
	return (*this);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

const std::string&	Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->grade += 1;
		std::cout << this->name << " lost one point" << std::endl;
	}
}

void	Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->grade -= 1;
		std::cout << this->name << " won one point" << std::endl;
	}
}

std::ostream &operator << (std::ostream& stream, const Bureaucrat& other)
{
	stream << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (stream);
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form)
{
	form.execute(*this);

	if (form.getSignValue())
		std::cout << this->name << " executed " << form.getName() << std::endl;
	else
		std::cout << this->name << " couldn't executed " << form.getName() << std::endl;
}
