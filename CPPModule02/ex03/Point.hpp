/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:00:30 by pemiguel          #+#    #+#             */
/*   Updated: 2023/04/21 16:38:31 by pemiguel         ###   ########.fr       */
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
	Point(Point &other);
	Point &operator = (const Point& other);
	float	getX();
	float	getY();
	void	setX(const float x);
	void	setY(const float y);
	~Point();
};

#endif
