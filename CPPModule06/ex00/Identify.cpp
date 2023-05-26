/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:47:20 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/05 17:01:05 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	isChar(const std::string& sLiteral)
{
	return (sLiteral.length() == 1 && (!(std::isdigit(sLiteral[0]))));
}

static bool	isInt(const std::string& sLiteral)
{
	size_t i = 0;
	if (sLiteral[i] == '-' || sLiteral[i] == '+')
		i += 1;
	for ( ; sLiteral[i]; i += 1)
	{
		if (!std::isdigit(sLiteral[i]))
			return (false);
	}
	return (true);
}

static bool	isFloat(const std::string& sLiteral)
{
	size_t i = 0;
	size_t dots = 0;
	/*
	Condicao1-> se nao existir nenhum '.' || a ultima posicao em string e diferente de 'f'
	|| a primeira posicao da string == '.' || a segunda ultima casa nao for um digito
	*/
	if (sLiteral.find('.') == std::string::npos || sLiteral[sLiteral.length() - 1] != 'f'
		|| sLiteral.find('.') == 0 || !std::isdigit(sLiteral[sLiteral.length() - 2]))
		return (false);
	if (sLiteral[i] == '-' || sLiteral[i] == '+')
		i += 1;
	for ( ; i < sLiteral.length() - 1; i += 1)
	{
		if (sLiteral[i] == '.')
			dots += 1;
		//Condicao2-> (se o caracter nao for um '.' e um digito) || o numero de '.' for maior que 1
		if ((sLiteral[i] != '.' && !std::isdigit(sLiteral[i])) || dots > 1)
			return (false);
	}
	return (true);
}

static bool	isDouble(const std::string& sLiteral)
{
	size_t i = 0;
	size_t dots = 0;
	if (sLiteral.find('.') == std::string::npos|| sLiteral.find('.') == 0
		|| !std::isdigit(sLiteral[sLiteral.length() - 1]))
		return (false);
	if (sLiteral[i] == '-' || sLiteral[i] == '+')
		i += 1;
	for ( ; i < sLiteral.length(); i += 1)
	{
		if (sLiteral[i] == '.')
			dots += 1;
		//Condicao2-> (se o caracter nao for um '.' e um digito) || o numero de '.' for maior que 1
		if ((sLiteral[i] != '.' && !std::isdigit(sLiteral[i])) || dots > 1)
			return (false);
	}
	return (true);
}

static bool	isScience(const std::string& sLiteral) {
	return (sLiteral == "-inff" || sLiteral == "+inff" || sLiteral == "nanf"
			|| sLiteral == "-inf" || sLiteral == "+inf"  || sLiteral == "nan");
}

types	Identify(const std::string sLiteral)
{
	types	res;

	if (sLiteral.length() == 0)
		return (Error);
	else if (isChar(sLiteral))
		res = Char;
	else if (isInt(sLiteral))
		res = Int;
	else if (isFloat(sLiteral))
		res = Float;
	else if (isDouble(sLiteral))
		res = Double;
	else if (isScience(sLiteral))
		res = Science;
	else
		res = Error;
	return (res);
}

static void	caseChar(char c)
{
	int nbr = c;
	if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << "float: " << nbr << ".0f" << std::endl;
	std::cout << "double: " << nbr << ".0" << std::endl;
}

static void	caseInt(int nbr)
{
	if (std::isprint(nbr))
		std::cout << "char: " << static_cast<char>(nbr)  << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << "float: " << nbr << ".0f" << std::endl;
	std::cout << "double: " << nbr << ".0" << std::endl;
}

static void	caseDouble(double c)
{
	char character = static_cast<int>(c);
	if (std::isprint(character))
		std::cout << "char: " << character << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	if (int (c) == c)
	{
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << c << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << c << std::endl;
	}

}

static void	caseFloat(float c)
{
	if (std::isprint(static_cast<char>(c)))
		std::cout << "char: " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	if (int (c) == c)
	{
		std::cout << "float: " << c << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << c << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	}
}

static void	caseScience(std::string sLiteral)
{
	std::string doubleS;
	std::string floatS;
	if (sLiteral.length() == 5 || sLiteral.compare("nanf") == 0)
	{
		floatS = sLiteral;
		doubleS = sLiteral.erase(sLiteral.length() - 1);
	}
	else
	{
		doubleS = sLiteral;
		floatS = sLiteral.append("f");
	}
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << floatS << std::endl;
	std::cout << "double: " << doubleS << std::endl;
}

static void	caseError(std::string sLiteral)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
}

void	ScalarConverter::convert(std::string sLiteral)
{
	types	type;

	type = Identify(sLiteral);
	switch (type)
	{
	case Char:
		caseChar(sLiteral.at(0));
		break;
	case Int:
		caseInt(cpp11Stoi(sLiteral));
		break;
	case Double:
		caseDouble(cpp11Stod(sLiteral));
		break;
	case Float:
		caseFloat(cpp11Stof(sLiteral));
		break;
	case Science:
		caseScience(sLiteral);
		break;
	case Error:
		caseError(sLiteral);
		break;
	}
}
