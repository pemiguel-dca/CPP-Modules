/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:47:20 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/03 16:22:56 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	isChar(const std::string& sLiteral)
{
	return (sLiteral.length() == 1 && std::isalpha(sLiteral[0]));
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
	if (sLiteral.find('.') == std::string::npos || sLiteral[sLiteral.length() - 1]
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

	if (isChar(sLiteral))
		res = Char;
	else if (isInt(sLiteral))
		res = Int;
	else if (isFloat(sLiteral))
		res = Float;
	else if (isDouble(sLiteral))
		res = Double;
	else
		res = Error;
	return (res);
}

static void	caseChar(char c)
{
	int nbr = c + 48;
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
		std::cout << "char: " << nbr + 48 << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << nbr << std::endl;
	std::cout << "float: " << nbr << ".0f" << std::endl;
	std::cout << "double: " << nbr << ".0" << std::endl;

}

static void	caseDouble(char c)
{
if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;

}

static void	caseFloat(char c)
{
if (std::isprint(c))
		std::cout << "char: " << c << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;

}
/*
static void	caseScience(std::string sLiteral)
{

}
*/
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
		caseInt(std::stoi(sLiteral.c_str()));
		break;
	case Double:
		caseDouble(sLiteral.at(0));
		break;
	case Float:
		caseFloat(sLiteral.at(0));
		break;
	//case Science:
		//caseScience(sLiteral);
		//break;
	default:
		break;
	}
}
