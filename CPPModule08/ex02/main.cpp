/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:54:56 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/29 12:36:25 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "MutantStack with integers" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Just removed: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size:" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Numbers in Stack" << std::endl;
	std::cout << "{";
	while (it != ite)
	{
		std::cout << *it;
		if (it + 1 != ite)
			std::cout << ", ";
		++it;
	}
	std::cout << "}" << std::endl;
	std::stack<int> s(mstack);

	std::cout << std::endl;

	std::cout << "MutantStack with chars" << std::endl;
	MutantStack<char> letters;
	letters.push('p');
	letters.push('d');
	std::cout << "Just removed: " << letters.top() << std::endl;
	letters.pop();
	letters.push('e');
	letters.push('d');
	letters.push('r');
	letters.push('o');
	MutantStack<char>::iterator it2 = letters.begin();
	MutantStack<char>::iterator ite2 = letters.end();
	while (it2 != ite2)
	{
		std::cout << *it2;
		++it2;
	}
	std::stack<char> s2(letters);
	return (0);
}
