/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:03:29 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/30 16:23:55 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPH_HPP
# define RPH_HPP

#include <iostream>
#include <stack>
#include <sstream>
#define AVAILABLE_CHARS "0123456789+/*- "
#define OPERATORS "+/*-"

/*Error msgs*/
#define ERROR "Error: "
#define ARGUMENTS "Program MUST have one argument!"
#define INVALID_CHAR "Invalid character!"
#define INVALID_FORMAT "Invalid format!"

static inline bool error_msg(std::string msg)
{
	std::cerr << ERROR + msg << std::endl;
	return (false);
}

class RPN
{
private:
	std::stack<int> expression;
public:
	RPN();
	~RPN();
	RPN(const RPN& other);
	RPN &operator = (const RPN& other);
	void	handleExpression(std::string &expr);
	bool	validateExpression(const std::string &expr);
};

int		Stoi(std::string sLiteral);
#endif
