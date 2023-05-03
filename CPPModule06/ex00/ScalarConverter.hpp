/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:52:39 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/03 16:27:58 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>
#include <sstream>
#include <typeinfo>
#include <cstring>

/*
There is no such thing as a static class in C++. The closest approximation
is a class that only contains static data members and static methods.
Since this class is 'static' it can't be instantiated
*/

enum types
{
	Char,
	Int,
	Double,
	Float,
	Error,
	Science,
};

class ScalarConverter
{
private:
	ScalarConverter();
	~ScalarConverter();

public:
	static void	convert(std::string sLiteral);
};

int	cpp11Stoi(std::string sLiteral);
#endif
