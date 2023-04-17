/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:06 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/17 16:57:11 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	contacts;

	std::string input = "";
	contacts.requirements();
	while (input.compare("EXIT"))
	{
		std::cout << "> ";
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			contacts.add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			contacts.view_contacts();
			contacts.search();
		}
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cin.clear();
			clearerr(stdin);
		}
	}
	return (0);
}
