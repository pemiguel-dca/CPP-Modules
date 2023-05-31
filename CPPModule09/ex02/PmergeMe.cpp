/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemiguel <pemiguel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:25:37 by pemiguel          #+#    #+#             */
/*   Updated: 2023/05/31 15:27:45 by pemiguel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& other)
{
	this->lst = other.lst;
	this->vec = other.vec;

	return (*this);
}

void	PmergeMe::initContainers(const char **argv)
{
	int number;
	for (int i = 0; argv[i]; i += 1)
	{
		number = Stoi(static_cast<std::string>(argv[i]));
		this->vec.push_back(number);
		this->lst.push_back(number);
	}
}

std::list<int>	PmergeMe::merge(std::list<int> &left, std::list<int> &right)
{
	std::list<int> merge_res;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merge_res.push_back(left.front());
			left.pop_front();
		}
		else
		{
			merge_res.push_back(right.front());
			right.pop_front();
		}
	}
	/*Copy the remaining elements of both lists if they're not empty*/
	while (!left.empty())
	{
		merge_res.push_back(left.front());
		left.pop_front();
	}
	while (!right.empty())
	{
		merge_res.push_back(right.front());
		right.pop_front();
	}
	return (merge_res);
}

std::list<int>	PmergeMe::MergeSort(std::list<int> &lst_param)
{
	if (lst_param.size() <= 1)
		return (lst_param);
	int mid = lst_param.size() / 2;
	std::list<int> left;
	std::list<int> right;

	/*Add the first half to the left side*/
	for (int i = 0; i < mid; i += 1)
	{
		left.push_back(lst_param.front());
		lst_param.pop_front();
	}
	/*The right side stays with the rest*/
	right = lst_param;

	/*Recursively merge both arrays*/
	left = this->MergeSort(left);
	right = this->MergeSort(right);

	return (this->merge(left, right));
}

std::vector<int>	PmergeMe::merge(std::vector<int> &left, std::vector<int> &right)
{
	std::vector<int> merge_res;
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			merge_res.push_back(left.front());
			left.erase(left.begin());//since it has no pop_front()
		}
		else
		{
			merge_res.push_back(right.front());
			right.erase(right.begin());
		}
	}
	while (!left.empty())
	{
		merge_res.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		merge_res.push_back(right.front());
		right.erase(right.begin());
	}
	return (merge_res);
}

std::vector<int>	PmergeMe::MergeSort(std::vector<int> &vec_param)
{
	if (vec_param.size() <= 1)
		return (vec_param);
	int mid = vec_param.size() / 2;
	std::vector<int> left(vec_param.begin(), vec_param.begin() + mid);
	std::vector<int> right(vec_param.begin() + mid, vec_param.end());

	left = this->MergeSort(left);
	right = this->MergeSort(right);

	return (this->merge(left, right));
}

template <typename T>
void	PmergeMe::printContainer(T container)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
}

void	PmergeMe::programOutput()
{
	int size = this->lst.size();
	clock_t startTime;

	std::cout << "Before: ";
	this->printContainer(this->lst);
	std::cout << std::endl << "After: ";
	startTime = clock();
	this->printContainer(this->MergeSort(this->lst));
	std::cout << std::endl << "Time to process a range of " << size
		<< " elements with std::list : " << static_cast<double>(clock() - startTime) / CLOCKS_PER_SEC << " us";
	startTime = clock();
	this->MergeSort(this->vec);
	std::cout << std::endl << "Time to process a range of " << size
		<< " elements with std::vector : " << static_cast<double>(clock() - startTime) / CLOCKS_PER_SEC << " us";
}

int	Stoi(std::string sLiteral)
{
	std::stringstream ss;
	int res;

	ss << sLiteral;
	ss >> res;
	return (res);
}
