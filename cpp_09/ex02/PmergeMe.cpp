/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:09:44 by mintan            #+#    #+#             */
/*   Updated: 2025/09/14 17:35:12 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors and Destructors */
PmergeMe::PmergeMe(): _numCmpr(0), _recurseLv(0)
{
	return;
}

PmergeMe::~PmergeMe()
{
	return;
}



/* Member Functions */
void	PmergeMe::populateVec(int argc, char *argv[])
{
	for (int i = 1; i < argc; ++i)
	{
		//validate each argument -> think about duplicates later
		if (!_isPosInt(std::string(argv[i])))
			throw (std::runtime_error(ERR_INVALIDINPUT + std::string(argv[i])));
		this->_dataVec.push_back(std::atoi(argv[i]));
	}
}

void	PmergeMe::vecSort()
{
	++(this->_recurseLv);
	// std::cout << "Recursion level: " << this->_recurseLv << std::endl;
	// std::cout << "Pair size: " << std::pow(2, this->_recurseLv) << std::endl;

	//do smth here to sort the pairs, probably using swap and the recursion level to get numbers
	//test using the can use std::max_element to find the position of then use swa
	this->_vecSortPairs();
	if (std::pow(2, this->_recurseLv) <= (this->_dataVec.size() / 2))
	{
		std::cout << "Recursion level: " << this->_recurseLv << std::endl;
		std::cout << "Pair size: " << std::pow(2, this->_recurseLv) << std::endl;
		this->vecSort();
	}
	//start doing the main chain and jacobsthal and binary insertion here
}

void	PmergeMe::printContainer(int containerType)	const
{
	switch (containerType)
	{
		case Vector:
		{
			// for (vecCIT it = this->_dataVec.begin(); it != this->_dataVec.end(); ++it)
				// std::cout << *it << " ";

			for (vecSize i = 0; i < this->_dataVec.size(); ++i)
				std::cout << this->_dataVec[i] << " ";
			break;
		}
		default:
			break;
	}
	std::cout << std::endl;
}









/* Helper Functions */
bool	PmergeMe::_withinIntLimits(const std::string &input)
{
	long	inputLong;

	inputLong = std::atol(input.c_str());
	if (inputLong > INT_MAX || inputLong < INT_MIN)
		return (false);
	return(true);
}

bool	PmergeMe::_isPosInt(const std::string &input)
{
	for (unsigned int i = 0; i < input.length(); ++i)
	{
		if (!std::isdigit(static_cast<int>(input[i])))
			return (false);
	}
	return (_withinIntLimits(input));
}

void	PmergeMe::_vecSortPairs()
{
	vecSize	stepSz;
	vecSize	cmpWindow;
	int		RHS;
	int		LHS;

	stepSz = std::pow(2, this->_recurseLv);
	cmpWindow = stepSz;
	std::cout << "Step size: " << stepSz << " | Compare Window: " << cmpWindow << " | Container size: " << this->_dataVec.size() << std::endl;
	while (this->_dataVec.size() - cmpWindow >= stepSz)	//check condition here
	{
		RHS = cmpWindow - 1;
		LHS = RHS - std::pow(2, this->_recurseLv - 1);

		std::cout << "LHS: " << this->_dataVec[LHS] << " | RHS: " << this->_dataVec[RHS] << std::endl;

		if (this->_dataVec[RHS] < this->_dataVec[LHS])
		{
			std::cout << "Perform swap" << std::endl;
		}
		else
			std::cout << "No need to swap" << std::endl;

		cmpWindow += stepSz;
		std::cout << "Step size: " << stepSz << " | Compare Window: " << cmpWindow << std::endl;
	}
}
