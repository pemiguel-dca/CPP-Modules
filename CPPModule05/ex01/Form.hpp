/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:34:38 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 12:42:57 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <Bureaucrat.hpp>

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

#endif
