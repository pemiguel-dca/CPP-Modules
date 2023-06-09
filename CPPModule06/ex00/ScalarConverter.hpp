/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:52:39 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/05 16:04:06 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>
#include <sstream>
#include <typeinfo>
#include <cstring>
#include <cmath>

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
double	cpp11Stod(std::string sLiteral);
float	cpp11Stof(std::string sLiteral);
#endif
