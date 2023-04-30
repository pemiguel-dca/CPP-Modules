/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:37:03 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 15:47:39 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool sign;
	const int gradeToSign;
	const int gradeToExecute;
	const std::string target;
	virtual void	executeSpecificForm(Bureaucrat const& executor) const = 0;
	AForm();

public:
	AForm(const std::string name, const int gradeToSign, const int gradeToExecute, const std::string target);
	AForm(const AForm& other);
	AForm& operator = (const AForm& other);
	bool	getSignValue() const;
	int	getGradeSign() const;
	int	getGradeExecute() const;
	const std::string	&getName() const;
	const std::string	&getTarget() const;
	void	beSigned(const Bureaucrat& bureaucrat);
	void	execute(Bureaucrat const& executor) const;
	virtual ~AForm();

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

std::ostream &operator << (std::ostream& stream, const AForm& other);

#endif
