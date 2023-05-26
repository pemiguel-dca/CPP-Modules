/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sto.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:23:51 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/05 16:20:59 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	cpp11Stoi(std::string sLiteral)
{
	std::stringstream ss;
	int res;

	//extract the string from the str variable (input the string in the stream)
	ss << sLiteral;
	// place the converted value to the int variable
	ss >> res;
	return (res);
}

double	cpp11Stod(std::string sLiteral)
{
	std::stringstream ss;
	double res;

	ss << sLiteral;
	ss >> res;
	return (res);
}

float	cpp11Stof(std::string sLiteral)
{
	std::stringstream ss;
	float res;

	ss << sLiteral;
	ss >> res;
	return (res);
}
