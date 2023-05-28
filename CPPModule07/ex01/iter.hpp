/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:59:30 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/27 22:39:15 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

/*Using cast here just to see the actual value of variable passed, for example, to see the actual char*/

template <typename T>
void	one_up(T &element)
{
	std::cout << "Element + 1 = " << static_cast<T>(element + 1) << std::endl;
}

template <typename T>
void	iter(T *array, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i += 1)
		f(array[i]);
}

#endif

