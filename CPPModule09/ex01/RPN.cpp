/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:03:53 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/30 17:58:03 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator = (const RPN& other)
{
	this->expression = other.expression;

	return (*this);
}

bool	RPN::validateExpression(const std::string &expr)
{
	if (expr.find_first_not_of(AVAILABLE_CHARS) != std::string::npos)
		return (error_msg(INVALID_CHAR));
	size_t	space, beg = 0;
	std::string	character;
	/*Validate numbers (< 10)*/
	for (int i = 0; i < expr.length(); i += 1)
	{
		space = expr.find(' ');
		character = expr.substr(beg, space);
		if (character.length() > 1)
			return (error_msg(INVALID_CHAR));
		/*Validate operators (operators must be at least - 1 than numbers)
		if (character.find_first_of(OPERATORS) != std::string::npos)
			operators += 1;
		else if (std::isdigit(character[0]))
			numbers += 1;
		*/
		beg += space;
	}
	/*
	std::cout << "Numbers: " << numbers << std::endl;
	std::cout << "Operators: " << operators << std::endl;
	*/
	return (true);
}
/* " 2 2 4 - +    " res =  */
void	RPN::handleExpression(std::string &expr)
{
	if (!this->validateExpression(expr))
		return ;
	int res, n;
	size_t	space, beg = 0;
	std::string	element;
	int op = 0, number = 0;
	for (int i = 0; i < expr.length(); i += 1)
	{
		space = expr.find(' ');
		element = expr.substr(beg, space);
		if (element.at(0) == ' ')
			continue ;
		if (std::isdigit(element.at(0)))
		{
			n = Stoi(element);
			number += 1;
			this->expression.push(n);
		}
		else if (element.find_first_not_of(OPERATORS) != std::string::npos)
		{
			if (number != 2)
			{
				error_msg(INVALID_FORMAT);
				return ;
			}
			if (element.at(0) == '+')
			{
				res = this->expression.top();
				this->expression.pop();
				res += this->expression.top();
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
			else if (element.at(0) == '-')
			{
				res = this->expression.top();
				this->expression.pop();
				res -= this->expression.top();
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
			else if (element.at(0) == '*')
			{
				res = this->expression.top();
				this->expression.pop();
				res *= this->expression.top();
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
			else if (element.at(0) == '/')
			{
				res = this->expression.top();
				this->expression.pop();
				res /= this->expression.top();
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
		}
		beg += space;
	}
}

int	Stoi(std::string sLiteral)
{
	std::stringstream ss;
	int res;

	ss << sLiteral;
	ss >> res;
	return (res);
}
