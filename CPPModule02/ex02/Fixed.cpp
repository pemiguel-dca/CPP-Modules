/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:06:48 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 15:43:38 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->fixed = 0;
}
Fixed::Fixed(const int value)
{
	this->fixed = roundf(value * (1 << this->fractional_bits));;
}

Fixed::Fixed(const float value)
{
	this->fixed =  roundf(value * (1 << this->fractional_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

float Fixed::toFloat() const
{
	return ((float)this->fixed / (float)(1 << 8));
}

int Fixed::toInt() const
{
	return (this->fixed >> this->fractional_bits);
}

std::ostream &operator << (std::ostream &stream, const Fixed &other)
{
	stream << other.toFloat();
	return (stream);
}

int	Fixed::getRawBits() const
{
	return(this->fixed);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed = raw;
}

Fixed&Fixed::operator = (const Fixed& other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator > (const Fixed& other)
{
	return (this->fixed > other.getRawBits());
}

bool	Fixed::operator < (const Fixed& other)
{
	return (this->fixed < other.getRawBits());
}

bool	Fixed::operator >= (const Fixed& other)
{
	return (this->fixed >= other.getRawBits());
}

bool	Fixed::operator <= (const Fixed& other)
{
	return (this->fixed <= other.getRawBits());
}

bool	Fixed::operator == (const Fixed& other)
{
	return (this->fixed == other.getRawBits());
}

bool	Fixed::operator != (const Fixed& other)
{
	return (this->fixed != other.getRawBits());
}

Fixed Fixed::operator + (const Fixed& other)
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - (const Fixed& other)
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator / (const Fixed& other)
{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator * (const Fixed& other)
{
	return (this->toFloat() * other.toFloat());
}

// Pre-increment operator
Fixed&Fixed::operator ++ ()
{
	this->fixed += 1;
	return (*this);
}

// Post-increment operator
// int x = y++; we return x then we increment 1 to value, exactly the same here
Fixed Fixed::operator ++ (int)
{
	Fixed temp(this->fixed * this->toFloat());
	this->fixed += 1;
	return (temp);
}

// Pre-decrement operator
Fixed&Fixed::operator -- ()
{
	this->fixed -= 1;
	return (*this);
}

// Post-decrement operator
// Create a copy of the original object, get the value of fixed(in float as expected) and before returning we decrement as suposed
Fixed Fixed::operator -- (int)
{
	Fixed temp(this->fixed * this->toFloat());
	this->fixed -= 1;
	return (temp);
}

Fixed& Fixed::min (Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n1);
	return (n2);
}

Fixed Fixed::min (const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n1);
	return (n2);
}

Fixed& Fixed::max (Fixed &n1, Fixed &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	return (n2);
}

Fixed Fixed::max (const Fixed &n1, const Fixed &n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	return (n2);
}
