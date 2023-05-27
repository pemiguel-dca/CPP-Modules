/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:17:56 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/27 17:05:02 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

/*Since a poiter can be NULL dynamic cast will return NULL if cast fails, on the other side(reference) it will throw an exception*/

Base::Base()
{
}

Base::~Base()
{
}

Base* Base::generate()
{
	srand(time(NULL));
	size_t	random = 1 + (rand() % 3); //generate random number between 1 and 3
	std::cout << random << std::endl;
	Base *instance = NULL;
	switch (random)
	{
	case 1:
		return (new A());
	case 2:
		return (new B());
	case 3:
		return (new C());
	}
	return (NULL);
}

void	Base::identify(Base* p)
{
	std::cout << "Identify <pointer param>" << std::endl;
	A *a;
	a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "Object is of type A" << std::endl;
		return ;
	}
	B *b;
	b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "Object is of type B" << std::endl;
		return ;
	}
	std::cout << "Object is of type C" << std::endl;
}

void	Base::identify(Base& p)
{
	std::cout << "Identify <reference param>" << std::endl;
	try
	{
		A a;
		a = dynamic_cast<A&>(p);
		std::cout << "Object is of type A" << std::endl;
	}
	catch (std::exception &error)
	{
		try
		{
			B b;
			b = dynamic_cast<B&>(p);
			std::cout << "Object is of type B" << std::endl;
		}
		catch(std::exception &error){std::cout << "Object is of type C" << std::endl;}
	}
}
