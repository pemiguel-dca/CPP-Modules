/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:39:32 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 22:15:44 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/*The method using here is to split the triangle into 3 small triangles, then proceed to calculate
each triangle's area, if the point is in the triangle the sum of the 3 areas as to be equal to the real area(the area of the triangle passed through parameters)
Video: https://www.youtube.com/watch?v=qObJQesvZUU
*/

static Fixed	abs(Fixed x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

static Fixed triangleArea(Point const p1, Point const p2, Point const p3)
{
	return (abs((p1.getX() * (p2.getY() - p3.getY()))
		  		+ (p2.getX() * (p3.getY() - p1.getY()))
		  		+ (p3.getX() * (p1.getY() - p2.getY()))) / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed   realArea = triangleArea(a, b, c);
	Fixed	area1 = triangleArea(point, b, c);
	Fixed	area2 = triangleArea(point, c, a);
	Fixed	area3 = triangleArea(point, a, b);

	return ((area1 + area2 + area3) == realArea);
}
