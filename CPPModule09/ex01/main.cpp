/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:00:51 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/31 09:51:11 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*"8 9 * 9 - 9 - 9 - 4 - 1 +" === 8 * 9 - 9 - 9 - 9 - 4 + 1*/

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (error_msg(ARGUMENTS));
	RPN	rpn;
	rpn.handleExpression(std::string(argv[1]));
}
