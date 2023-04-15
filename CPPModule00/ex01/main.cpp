/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:06 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/15 19:01:26 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Phonebook	contact;
	std::string input = "";
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
			contact.add_contact();
		/*
		else if (input.compare("SEARCH") == 0)
			contact.search();3
		*/
		std::cout << "> " << std::flush;
		std::cin >> input;
	}
}
