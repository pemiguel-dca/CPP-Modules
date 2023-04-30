/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:46:55 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/30 15:56:29 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: AForm("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm Params constructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
: AForm(other)
{
	std::cout << "ShrubberyCreationForm Copy constructor has been called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm:: operator = (const ShrubberyCreationForm& other)
{
	AForm::operator=(other);
	std::cout << "ShrubberyCreationForm Copy assignment operator has been called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor has been called" << std::endl;
}

void	ShrubberyCreationForm::executeSpecificForm(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getSignValue())
		throw AForm::GradeTooLowException();
	else if (!this->getSignValue())
		std::cerr <<  executor.getName() << " can't execute ShrubberyCreationForm because it wasn't signed!" << std::endl;
	else
	{
		std::string fileName = this->getTarget() + "_shrubbery";
		std::ofstream file(const_cast<char*>(fileName.c_str()));
		file << "      '.,\n"
				<< "        'b      *\n"
				<< "         '$    #.\n"
				<< "          $:   #:\n"
				<< "          *#  @):\n"
				<< "          :@,@):   ,.**: \n"
				<< ",         :@@*: ..** \n"
				<< " #o.    .:(@'.@*' \n"
				<< "    bq,..:,@@*   ,* \n"
				<< "    ,p$q8,:@)  .p*'\n"
				<< "        '@@Pp@@* \n"
				<< "         Y7'.'\n"
				<< "        :@):.\n"
				<< "       .:@:'.\n"
				<< "     .::(@:.\n";
	}
}
