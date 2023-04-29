/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:28:27 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 22:22:37 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	Bureaucrat();

public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();
	Bureaucrat& operator = (const Bureaucrat& other);
	const std::string& getName() const;
	int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(Form& form);
	/* Exception classes */
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Grade too low"; }
	};
};

std::ostream &operator << (std::ostream& stream, const Bureaucrat& other);

#endif
