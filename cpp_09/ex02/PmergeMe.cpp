/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:09:44 by mintan            #+#    #+#             */
/*   Updated: 2025/09/22 02:51:41 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors and Destructors */
PmergeMe::PmergeMe(): _numCmpr(0), _recurseLv(0), _elemSize(0)
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
	this->_elemSize = std::pow(2, this->_recurseLv - 1);
	std::cout << "Recursion level: " << this->_recurseLv << std::endl;
	std::cout << "Elem size: " << this->_elemSize << std::endl;

	this->_vecSortPairs();
	if (std::pow(2, this->_recurseLv) <= (this->_dataVec.size() / 2))
		this->vecSort();

	//form the main chain using std::copy or vector.insert
	this->_vecCreateChains(&mainChain, &pEnd, &tail);

	PmergeMe::printVect(mainChain, "Main Chain");
	PmergeMe::printVect(pEnd, "pEnd");
	PmergeMe::printVect(tail, "tail");

	// erase the orginal chain
	this->_dataVec.erase(this->_dataVec.begin(), this->_dataVec.end());

	//start doing the main chain and jacobsthal and binary insertion here and insert the non-participating part at the end
	this->_vecCombineChains(&mainChain, &pEnd);

	//copy the main main chain and the tail back to the original chain
	this->_dataVec.insert(this->_dataVec.end(), mainChain.begin(), mainChain.end());
	this->_dataVec.insert(this->_dataVec.end(), pEnd.begin(), pEnd.end());	//remove later after the binary insert

	if (tail.size() > 0)
		this->_dataVec.insert(this->_dataVec.end(), tail.begin(), tail.end());
	PmergeMe::printVect(this->_dataVec, "Original Chain");



	--(this->_recurseLv);
	this->_elemSize = std::pow(2, this->_recurseLv - 1);


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

unsigned int	PmergeMe::_genJacobsthalNum(unsigned int lv)
{
	if (lv < 2)
		return (lv);
	return (_genJacobsthalNum(lv - 1) + (2 * _genJacobsthalNum(lv - 2)));
}

unsigned int	PmergeMe::_getNearestJacobsthalLv(unsigned int jn)
{
	unsigned int	lv;

	lv = 0;
	while (_genJacobsthalNum(lv) <= jn)
		lv++;
	return (--lv);
}



void	PmergeMe::_vecSortPairs()
{
	int		stepSz;
	int		cmpWindow;
	vecIT	itRHS;
	vecIT	itLHS;

	stepSz = this->_elemSize * 2;
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
	std::cout << "Elem size: " << this->_elemSize << std::endl;

	int		cmpWindow;
	int		tailSz;
	vecCIT	bigIT;
	vecCIT	smallIT;
	vecCIT	tailIT;

	cmpWindow = this->_elemSize * 2;

	//insert the b1
	mainChain->insert(mainChain->end(), this->_dataVec.begin(), \
	this->_dataVec.begin() + this->_elemSize);

	//insert all the As into main chain and Bs into pEnd and the remaining into tail
	bigIT = this->_dataVec.begin() + this->_elemSize;
	smallIT = this->_dataVec.begin() + cmpWindow;
	while (static_cast<int>(this->_dataVec.size()) - cmpWindow >= 0)
	{
		mainChain->insert(mainChain->end(), bigIT, bigIT + this->_elemSize);
		if (static_cast<int>(this->_dataVec.size()) - (cmpWindow + this->_elemSize) >= 0)
			pEnd->insert(pEnd->end(), smallIT, smallIT + this->_elemSize);
		cmpWindow += this->_elemSize * 2;
		bigIT += this->_elemSize * 2;
		smallIT += this->_elemSize * 2;
	}
	cmpWindow -= this->_elemSize * 2;
	if (static_cast<int>(this->_dataVec.size()) - (cmpWindow + this->_elemSize) >= 0)
		tailIT = this->_dataVec.begin() + cmpWindow + this->_elemSize;
	else
		tailIT = this->_dataVec.begin() + cmpWindow;
	tailSz = this->_dataVec.end() - tailIT;
	tail->insert(tail->end(), tailIT, tailIT + tailSz);
}

int	PmergeMe::_findBoundElem(unsigned int elemN)	//finds the corresponding start of the A element in the mainchain given the elemN
{

}


void	PmergeMe::_vecParsePEnd(vec *pEnd, vec *bound)
{
	unsigned int	elemN;
	unsigned int	jacobLv;
	unsigned int	closestJacobN;
	int				currJacobN;
	int				prevJacobN;
	vec				tempPEnd;
	vecCIT			itSt;

	elemN = pEnd->size() / this->_elemSize + 1;
	jacobLv = _getNearestJacobsthalLv(elemN);
	closestJacobN = _genJacobsthalNum(jacobLv);
	std::cout << "Elem Nth: " << elemN << " | Nearest jacob level: " << jacobLv << std::endl;
	if (elemN < 3)		//means that there is only b2 in pENd
	{
		//look for the corresponding value for a2 in the main chain and store the value in bound
		//the idea is that the value can be used to find the position later to keep as the boundary before binary insertion
		//if there is no corresponding bound, add -1 inot bound => maybe can turn into a function
		//return
	}
	for (unsigned int lv = 3; lv <= jacobLv; ++lv)
	{
		currJacobN = _genJacobsthalNum(lv);
		prevJacobN = _genJacobsthalNum(lv - 1);
		std::cout << "Current Jacobs Num: " << currJacobN << " | Prev Jacobs Num: " << prevJacobN << std::endl;


		while (currJacobN >  prevJacobN)
		{
			itSt = pEnd->begin() + (this->_elemSize * (currJacobN - 2));
			tempPEnd.insert(tempPEnd.end(), itSt, itSt + this->_elemSize);
			//find the corresponding bound value and add to bound vec
			currJacobN--;
		}
	}

	while (elemN > closestJacobN)	//if there are elements after the largest jacobN
	{
		itSt = pEnd->begin() + (this->_elemSize * (elemN - 2));
		tempPEnd.insert(tempPEnd.end(), itSt, itSt + this->_elemSize);
		elemN--;
		//add all the extra elems after the jacoblv starting from the back + add bound
	}

	//clear pEnd and copy assign from tempPEnd
	(*pEnd).erase(pEnd->begin(), pEnd->end());
	*pEnd = tempPEnd;





	bound->push_back(1);	//remove later
}


void	PmergeMe::_vecCombineChains(vec *mainChain, vec *pEnd)
{
	vec	bound;

	if (pEnd->size() > 0)
	{
		//binary insertion of elements into the main chain based on jacobsthal numbers
			//parse pEnd and rearrange it in the order that you want to do the binary search from
			//while parsing pEnd, find the bound for each of the elements in the main chain and store it in another vector
			//
		this->_vecParsePEnd(pEnd, &bound);
		printVect(*pEnd, "pEnd (after parse)");

		;
		bound.push_back(mainChain->size());	//remove later
	}
}

