/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:06 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/16 22:34:01 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Phonebook	contacts;

	std::string input = "";
	contacts.requirements();
	while (input.compare("EXIT"))
	{
		std::cout << "> " << std::flush;
		std::cin >> input;
		if (input.compare("ADD") == 0)
			contacts.add_contact();
		else if (input.compare("SEARCH") == 0)
		{
			contacts.view_contacts();
			contacts.search();
		}
	}
	return (0);
}
