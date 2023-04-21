/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:00:30 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 21:07:40 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

class Point
{
private:
	float	x;
	float	y;
public:
	Point(float x, float y);
	Point(const Point &other);
	Point &operator = (const Point& other);
	float	getX() const;
	float	getY() const;
	void	setX(const float x);
	void	setY(const float y);
	~Point();
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif
