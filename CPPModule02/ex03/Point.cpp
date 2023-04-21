/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:15:24 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 16:39:05 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(float x, float y) : x (x), y (y)
{
}

Point::~Point()
{
}

float	Point::getX()
{
	return(this->x);
}

float	Point::getY()
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
	this->setX(this->getX());
	this->setX(this->getY());
	return (*this);
}

Point::Point(Point &other)
{

}
