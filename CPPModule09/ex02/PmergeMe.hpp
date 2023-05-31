/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:25:34 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/31 15:27:22 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <sstream>
#include <ctime>

/*Error msgs*/
#define ERROR "Error: "
#define ARGUMENTS "Program's arguments MUST be POSITIVE integers!"
#define DIGITS "1234567890"
static inline bool error_msg(std::string msg)
{
	std::cout << ERROR + msg << std::endl;
	return (false);
}

class PmergeMe
{
private:
	std::list<int> lst;
	std::vector<int> vec;
public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator = (const PmergeMe& other);
	template <typename T>
	void	printContainer(T container);
	void	initContainers(const char **argv);
	std::list<int>	merge(std::list<int> &left, std::list<int> &right);
	std::list<int>	MergeSort(std::list<int> &lst_param);
	std::vector<int>	merge(std::vector<int> &left, std::vector<int> &right);
	std::vector<int>	MergeSort(std::vector<int> &vec_param);
	void	programOutput();
	~PmergeMe();
};

int	Stoi(std::string sLiteral);

#endif
