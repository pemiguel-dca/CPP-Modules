/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:47:20 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/02 14:03:00 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool	isChar(const std::string& sLiteral)
{
	return (sLiteral.length() == 1 && std::isalpha(sLiteral[0]) && std::isprint(sLiteral[0]));
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
	if (sLiteral.find('.') == std::string::npos || sLiteral.back() != 'f'
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
	
}

static bool	isError(const std::string& sLiteral)
{

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
	else if (isError(sLiteral))
		res = Error;
}
