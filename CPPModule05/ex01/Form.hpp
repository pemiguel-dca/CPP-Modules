/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:34:38 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 22:24:34 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool sign;
	const int gradeToSign;
	const int gradeToExecute;

public:
	Form();
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form& other);
	Form& operator = (const Form& other);
	bool	getSignValue() const;
	int	getGradeSign() const;
	int	getGradeExecute() const;
	const std::string	&getName() const;
	void	beSigned(const Bureaucrat& bureaucrat);
	~Form();

	/* Excepetion classes */
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

std::ostream &operator << (std::ostream& stream, const Form& other);

#endif
