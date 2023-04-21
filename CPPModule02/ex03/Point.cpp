/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:15:24 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 21:18:37 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(float x, float y) : x (x), y (y)
{
}

Point::~Point()
{
}

float	Point::getX() const
{
	return(this->x);
}

float	Point::getY() const
{
	return(this->y);
}

void	Point::setX(const float x)
{
	this->x = x;
}

void	Point::setY(const float y)
{
	this->y = y;
}

Point&Point::operator = (const Point &other)
{
	this->setX(other.getX());
	this->setY(other.getY());
	return (*this);
}

Point::Point(const Point &other)
{
	*this = other;
}
