/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:09:02 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/27 15:40:24 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>


class Base
{
public:
	Base();
	virtual ~Base();
	Base* generate();
	void	identify(Base* p);
	void	identify(Base& p);
};

#endif
