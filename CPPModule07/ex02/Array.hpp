/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:00:26 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/28 14:16:48 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
private:
	T				*data;
	unsigned int	size_var;
public:
	Array();
	Array(const Array &other);
	Array(unsigned int n);
	Array &operator = (const Array &other);
	T& operator[] (int n);
	unsigned int size();
	~Array();

	class OutOfBounds : public std::exception
	{
		public:
		virtual const char* what() const throw() { return "Index out of bounds!"; }
	};
};

template <typename T>
Array<T>::Array() : data(new T[0]()), size_var(0)
{
}

template <typename T>
Array<T>::~Array()
{
	if (data)
		delete[] data;
}

template <typename T>
Array<T>::Array(unsigned int n) : size_var(n)
{
	data = new T[n];
}

template <typename T>
Array<T>::Array(const Array &other)
: data(new T[other.size_var]()), size_var(other.size_var)
{
	*this = other;
}

template <typename T>
Array<T>&Array<T>::operator = (const Array &other)
{
	if (this->data)
		delete[] data;
	this->size_var = other.size_var;
	data = new T[this->size_var];
	for (int i = 0; i < this->size_var; i++)
		data[i] = other.data[i];
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](int n)
{
	if (n >= this->size_var || n < 0)
		throw Array<T>::OutOfBounds();
	return this->data[n];
}

template <typename T>
unsigned int Array<T>::size()
{
	return (this->size_var);
}

#endif
