/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:03:53 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/30 23:36:41 by pemiguel         ###   ########.fr       */
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

bool	RPN::validateExpression(std::string &expr)
{
	if (expr.find_first_not_of(AVAILABLE_CHARS) != std::string::npos
		|| expr.find_first_not_of(OPERATORS) == std::string::npos)
		return (error_msg(INVALID_CHAR));
	int	space, operands = 0, operators = 0;
	std::string	character;
	expr += ' ';//to read last element since my condition goes until expr.length() > 1
	/*Validate numbers (< 10) also, because we're using only the four basics operands
	it is safe to say that the number of operands must be one less than the total number of numbers in the expression*/
	while (expr.length() > 1)
	{
		space = expr.find(' ');
		if (space == 0)
			space = 1;
		character = expr.substr(0, space);
		if (std::isdigit(character.at(0)))
			operands += 1;
		else if (character.find_first_not_of(OPERATORS) == std::string::npos)
			operators += 1;
		if (character.length() > 1)
			return (error_msg(INVALID_CHAR));
		expr = expr.substr(space, expr.length());
	}
	if (operands - 1 != operators)
		return (error_msg(INVALID_FORMAT));
	return (true);
}

/* " 2 2 4 - +    " res =  */
void	RPN::handleExpression(std::string &expr)
{
	std::string expr_rep(expr), element;
	if (!this->validateExpression(expr_rep))
		return ;
	int	space, number = 0, res = 0, top;
	expr += ' ';
	while (expr.length() > 1)
	{
		space = expr.find(' ');
		element = expr.substr(0, space);
		if (space == 0)
			space = 1;
		else if (std::isdigit(element.at(0)))
		{
			number += 1;
			this->expression.push(Stoi(element));
		}
		else if (element.find_first_not_of(OPERATORS) == std::string::npos)
		{
			if (number < 2)
			{
				error_msg(INVALID_FORMAT);
				return ;
			}
			if (element.at(0) == '+')
			{
				top = this->expression.top();
				this->expression.pop();
				res = this->expression.top() + top;
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
			else if (element.at(0) == '-')
			{
				top = this->expression.top();
				this->expression.pop();
				res = this->expression.top() - top;
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
			else if (element.at(0) == '*')
			{
				top = this->expression.top();
				this->expression.pop();
				res = this->expression.top() * top;
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
			else if (element.at(0) == '/')
			{
				top = this->expression.top();
				this->expression.pop();
				res = this->expression.top() / top;
				this->expression.pop();
				this->expression.push(res);
				number -= 1;
			}
		}
		expr = expr.substr(space, expr.length());
	}
	std::cout << res << std::endl;
}

int	Stoi(std::string sLiteral)
{
	std::stringstream ss;
	int res;

	ss << sLiteral;
	ss >> res;
	return (res);
}
