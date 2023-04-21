/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:03:11 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 22:07:42 by pemiguel         ###   ########.fr       */
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
	Fixed&operator = (const Fixed& other);
	Fixed&operator ++ ();
	Fixed&operator -- ();
	Fixed operator ++ (int);
	Fixed operator -- (int);
	Fixed operator + (const Fixed& other);
	Fixed operator - (const Fixed& other);
	Fixed operator * (const Fixed& other);
	Fixed operator / (const Fixed& other);
	bool operator > (const Fixed& other);
	bool operator < (const Fixed& other);
	bool operator >= (const Fixed& other);
	bool operator <= (const Fixed& other);
	bool operator == (const Fixed& other);
	bool operator != (const Fixed& other);
	static Fixed& min(Fixed& n1, Fixed& n2);
	static Fixed min(const Fixed& n1, const Fixed& n2);
	static Fixed& max(Fixed& n1, Fixed& n2);
	static Fixed max(const Fixed& n1, const Fixed& n2);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream&operator << (std::ostream &stream, const Fixed& other);

#endif
