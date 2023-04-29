/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:26:35 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/29 22:28:46 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	me("pedro", 42);
		Form		form("42 school", 48, 150);
		me.incrementGrade();
		/*Current grade*/
		std::cout << me << std::endl;
		std::cout << form;
		me.signForm(form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
