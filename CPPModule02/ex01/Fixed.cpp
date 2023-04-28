/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:06:48 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/27 14:49:20 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*
Fixed point representation
Unsures that the number passed is as accurate as possible through fixed point format

toFloat
The fixed-point representation of a number is stored as a 32-bit integer where the first 24 bits represent the integer part and the last 8 bits represent the fractional part.
So to get the fixed point number you need to divide the value with 2^8 (256), and this is same thing if we try to shift 8 bits to the right

toInt
As I said the fixed-point representation of a number is stored as a 32-bit integer, so since the first 24 represent the integer part I just need to 'ignore' the last 8
to represent the number as an integer, so that's why we bitshift to the left by this->fractional_bits(8)
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed = 0;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	/*Convert to a fixed point representation*/
	this->fixed = roundf(value * (1 << this->fractional_bits));
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	/*Convert to a fixed point representation*/
	this->fixed =  roundf(value * (1 << this->fractional_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

float Fixed::toFloat() const
{
	/*
	Apropriate and cleanest way, (can't use pow)
	return ((float)this->fixed / (float) pow(2, this->fractional_bits))
	At the end of the day will always be dividing by 256
	*/
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
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}
