/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:09:52 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/01 17:15:44 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
/*Intern will be a abstract class that will have the pure virtual function 'makeForm()'
Although it makes no sense to have a copy constructor and a copy assignment operator,
I still have to make them to respect the rules of the subject 'class in Orthodox Canonical Form'
*/
class Intern
{
private:
	typedef struct s_forms
	{
		std::string	name;
		AForm	*forms;
	}	t_forms;

public:
	Intern();
	Intern(const Intern& other);
	~Intern();
	AForm	*makeForm(const std::string name_form, const std::string target);
};

#endif
