/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:43:05 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/28 23:04:07 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span new_sp(10);
	new_sp.fillContainer();
	new_sp.printCointaner();
	std::cout << std::endl;
	try
	{
		std::cout << new_sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what();
	}
	try
	{
		std::cout << new_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& error)
	{
		std::cerr << error.what();
	}
	
	return (0);
}

