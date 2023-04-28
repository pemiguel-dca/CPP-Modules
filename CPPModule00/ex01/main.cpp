/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:06 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/26 12:09:52 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	Phonebook	contacts;

	std::string input = "";
	contacts.requirements();
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
			contacts.add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			contacts.view_contacts();
			contacts.search();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //preventing double prompt
		}
		if (std::cin.eof())
			std::cout << std::endl;
		clearerr(stdin);
		std::cin.clear();
		std::cout << "> ";
		getline(std::cin, input);
	}
	return (0);
}

