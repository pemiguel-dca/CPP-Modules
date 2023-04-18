/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:28:21 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/18 18:02:19 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdio>

std::string	getVar(std::string str)
{
	std::string	input;

	while (true)
	{
		std::cout << str;
		getline(std::cin, input);
		if (!input.empty() || !std::cin.eof())
			break ;
		clearerr(stdin);
		std::cin.clear();
		std::cout << std::endl;
	}
	return (input);
}

int main()
{
	std::string	file_name = getVar("File name: ");
	std::string	s1 = getVar("First str: ");
	std::string	s2 = getVar("Second str: ");
	std::ofstream file(const_cast<char*>(file_name.c_str()));

	return (0);
}
