/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:46:55 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/01 16:26:09 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Intern.hpp"

class ShrubberyCreationForm : public AForm, Intern
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);
	virtual void executeSpecificForm(const Bureaucrat& executor) const;
	virtual AForm	*makeForm(std::string name_form, std::string target);
	~ShrubberyCreationForm();
};

#endif
