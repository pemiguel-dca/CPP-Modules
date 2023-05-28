/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:47:53 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/28 15:04:58 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <cstring>

/*Templates enable you to write code that can work with different data types without having to rewrite the same logic for each type.
Overall, the idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types */

/*Ternary operator ->short if/else statment.
variable = (condition) ? expressionTrue : expressionFalse;*/

/*It may seem odd the way I do this functions but is only to follow the exercise's request
(If the two of them are equal, then it returns the second one).*/

template <typename T>
T	max(T a, T b)
{
	return ((a <= b) ? b : a);
}

template <typename T>
T	min(T a, T b)
{
	return ((a >= b) ? b : a);
}

template <typename T>
void	swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

#endif
