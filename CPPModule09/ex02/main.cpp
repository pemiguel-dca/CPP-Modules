/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:24:51 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/31 15:03:55 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool validateParams(const char **argv)
{
	std::string element;
	for (int i = 0; argv[i]; i += 1)
	{
		element = static_cast<const char *>(argv[i]);
		if (element.find_first_not_of(DIGITS) != std::string::npos)
			return (error_msg(ARGUMENTS));
	}
	return (true);
}

int main(int argc, char **argv)
{
	argv += 1;
	if (!validateParams((const char **)argv))
		return (1);
	PmergeMe merge;
	merge.initContainers((const char **)argv);
	merge.programOutput();
	return (0);
}
