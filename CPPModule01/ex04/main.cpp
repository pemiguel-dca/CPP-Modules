/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:28:21 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/27 15:17:26 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdio>

/*ofstream variable creates file
getline with delim '\0' reads until EOF
std::string.find(toFind) -> will return pos of toFind in 'string', if toFind is not in 'string' returns npos
*/

std::string	getVar(std::string str)
{
	std::string	input;

	while (true)
	{
		std::cout << str;
		getline(std::cin, input);
		if (!input.empty() || !std::cin.eof() || str[0] != '\n')
			break ;
		clearerr(stdin);
		std::cin.clear();
		std::cout << std::endl;
	}
	return (input);
}

void	replace(std::ifstream *file, std::string& file_name, std::string& toFind, std::string& toReplace)
{
	(void)toReplace;
	std::string	content_in_file;
	std::string	new_file_replace = file_name + ".replace";
	if (std::getline(*file, content_in_file, '\0'))
	{
		size_t	pos = content_in_file.find(toFind);
		std::ofstream	replace(const_cast<char*>(new_file_replace.c_str()));
		while (pos != std::string::npos)
		{
			content_in_file.erase(pos, toFind.length());
			content_in_file.insert(pos, toReplace);
			pos = content_in_file.find(toFind);
		}
		replace << content_in_file;
		replace.close();
	}
	else
		std::cout << file_name <<" is empty";
}

int main()
{
	std::string	file_name = getVar("File name: ");
	std::string	s1 = getVar("First str: ");
	std::string	s2 = getVar("Second str: ");

	std::ifstream	file;
	file.open(const_cast<char*>(file_name.c_str()));
	if (file)
	{
		replace(&file, file_name, s1, s2);
		file.close();
	}
	else
		std::cout << "File doesn't exist";
	return (0);
}
