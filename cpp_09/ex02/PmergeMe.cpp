/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:09:44 by mintan            #+#    #+#             */
/*   Updated: 2025/09/16 10:56:22 by mintan           ###   ########.fr       */
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
int		PmergeMe::getNumCmpr()	const
{
	return (this->_numCmpr);
}

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
	vec	mainChain;
	vec	pEnd;
	vec	tail;

	++(this->_recurseLv);
	// std::cout << "Recursion level: " << this->_recurseLv << std::endl;
	// std::cout << "Pair size: " << std::pow(2, this->_recurseLv) << std::endl;

	this->_vecSortPairs();
	if (std::pow(2, this->_recurseLv) <= (this->_dataVec.size() / 2))
	{
		std::cout << "Recursion level: " << this->_recurseLv << std::endl;
		std::cout << "Pair size: " << std::pow(2, this->_recurseLv) << std::endl;
		this->vecSort();
	}

	//form the main chain using std::copy or vector.insert
	this->_vecCreateChains(&mainChain, &pEnd, &tail);

	PmergeMe::printVect(mainChain, "Main Chain");
	PmergeMe::printVect(pEnd, "pEnd");
	PmergeMe::printVect(tail, "tail");

	//start doing the main chain and jacobsthal and binary insertion here
	--(this->_recurseLv);

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
		// another case here for the other container
		default:
			break;
	}
	std::cout << std::endl;
}

void	PmergeMe::printVect(vec vector, std::string name)
{
	std::cout << "Vector Name: " << name << " | ";
	for (vecCIT it = vector.begin(); it != vector.end(); ++it)
		std::cout << *it << " ";
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
	int		stepSz;
	int		cmpWindow;
	vecIT	itRHS;
	vecIT	itLHS;

	stepSz = std::pow(2, this->_recurseLv);
	cmpWindow = stepSz;
	// std::cout << "Step size: " << stepSz << " | Compare Window: " << cmpWindow << " | Container size: " << this->_dataVec.size() << std::endl;
	while (static_cast<int>(this->_dataVec.size()) - cmpWindow >= 0)
	{
		itRHS = this->_dataVec.begin() + (cmpWindow - 1);
		itLHS = itRHS - (stepSz / 2);
		if (*itRHS < *itLHS)
		{
			// std::swap_ranges(vec.begin(), vec.begin() + 2, vec.begin() + 2);
			// std::cout << "Range start: " << *(itLHS - (stepSz / 2) + 1) << " | Range end: " << *itLHS << std::endl;
			std::swap_ranges(itLHS - (stepSz / 2) + 1, itLHS + 1, itLHS + 1);
		}
		this->_numCmpr++;
		cmpWindow += stepSz;
	}
	this->printContainer(Vector);
	std::cout << "Num of comparisons so far: " << this->getNumCmpr() << std::endl;
}


void	PmergeMe::_vecCreateChains(vec *mainChain, vec *pEnd, vec *tail)
{
	std::cout << "Inside create chains now" << std::endl;
	std::cout << "Recursion level: " << this->_recurseLv << std::endl;
	std::cout << "Pair size: " << std::pow(2, this->_recurseLv) << std::endl;

	int		stepSz;
	int		cmpWindow;
	int		tailSz;
	vecCIT	bigIT;
	vecCIT	smallIT;
	vecCIT	tailIT;

	stepSz = std::pow(2, this->_recurseLv - 1);
	cmpWindow = stepSz * 2;

	//insert the b1
	mainChain->insert(mainChain->end(), this->_dataVec.begin(), this->_dataVec.begin() + stepSz);

	// std::cout << "After insert b1" << std::endl;
	// PmergeMe::printVect(mainChain, "Main Chain");

	//insert all the As into main chain and Bs into pEnd and the remaining into tail
	bigIT = this->_dataVec.begin() + stepSz;
	smallIT = this->_dataVec.begin() + cmpWindow;
	while (static_cast<int>(this->_dataVec.size()) - cmpWindow >= 0)
	{
		mainChain->insert(mainChain->end(), bigIT, bigIT + stepSz);
		if (static_cast<int>(this->_dataVec.size()) - (cmpWindow + stepSz) >= 0)
			pEnd->insert(pEnd->end(), smallIT, smallIT + stepSz);
		cmpWindow += stepSz * 2;
		bigIT += stepSz * 2;
		smallIT += stepSz * 2;
	}
	cmpWindow -= stepSz * 2;
	if (static_cast<int>(this->_dataVec.size()) - (cmpWindow + stepSz) >= 0)
		tailIT = this->_dataVec.begin() + cmpWindow + stepSz;
	else
		tailIT = this->_dataVec.begin() + cmpWindow;
	tailSz = this->_dataVec.end() - tailIT;
	tail->insert(tail->end(), tailIT, tailIT + tailSz);
}
