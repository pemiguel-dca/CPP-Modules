/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:37:26 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 12:45:27 by pemiguel         ###   ########.fr       */
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

Form::~Form()
{
	std::cout << "Form default destructor has been called" << std::endl;
}
