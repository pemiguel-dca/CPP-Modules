/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:03:11 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/20 15:46:03 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					fixed;
	static const int	fractional_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int value);
	Fixed(const float value);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	Fixed&operator = (const Fixed& other);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream&operator << (std::ostream &stream, const Fixed& other);

#endif
