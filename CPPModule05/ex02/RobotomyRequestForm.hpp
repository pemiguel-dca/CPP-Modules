/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 13:04:20 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 15:57:37 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator = (const RobotomyRequestForm& other);
	virtual void executeSpecificForm(const Bureaucrat& executor) const;
	~RobotomyRequestForm();
};

#endif
