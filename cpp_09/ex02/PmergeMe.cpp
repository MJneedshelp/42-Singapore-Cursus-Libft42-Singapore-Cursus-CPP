/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:09:44 by mintan            #+#    #+#             */
/*   Updated: 2025/09/24 01:24:17 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Constructors and Destructors */
PmergeMe::PmergeMe(): seqSize(0), _numCmpr(0), _recurseLv(0), _elemSize(0)
{
	return;
}

PmergeMe::~PmergeMe()
{
	return;
}

/* Member Functions */
void	PmergeMe::initialiseMbrs()
{
	this->_numCmpr = 0;
	this->_recurseLv = 0;
	this->_elemSize = 0;
}

int		PmergeMe::getNumCmpr()	const
{
	return (this->_numCmpr);
}

bool	PmergeMe::validateInput(int argc, char *argv[])
{
	std::set<int>	setCheck;

	for (int i = 1; i < argc; ++i)
	{
		if (!_isPosInt(std::string(argv[i])))
		{
			std::cerr << ERR_INVALIDINPUT + std::string(argv[i]) << std::endl;
			return (false);
		}
		if (!setCheck.insert(std::atoi(argv[i])).second)
		{
			std::cerr << ERR_DUPEINPUT + std::string(argv[i]) << std::endl;
			return (false);
		}
	}
	this->seqSize = argc - 1;
	return (true);
}

void	PmergeMe::printContainer(int containerType)	const
{
	switch (containerType)
	{
		case Vector:
		{
			std::cout << "Vector: ";
			for (vecSize i = 0; i < this->_dataVec.size(); ++i)
				std::cout << this->_dataVec[i] << " ";
			break;
		}
		case Deque:
		{
			std::cout << "Deque: ";
			for (dqCIT it = this->_dataDQ.begin(); it != this->_dataDQ.end(); ++it)
				std::cout << *it << " ";
			break;
		}
		default:
			break;
	}
	std::cout << std::endl;
}

/* Member Functions for vector<int> */
void	PmergeMe::populateVec(int argc, char *argv[])
{
	for (int i = 1; i < argc; ++i)
		this->_dataVec.push_back(std::atoi(argv[i]));
}

/* Description: Uses the Ford-Johnson algorithm on a vector. Recursively performs
   the following steps:
	1. Sort pairs
	2. Create the Main Chain, pEnd and Tail
	3. Combine pEnd into the Main Chain using binary insertion
	4. Copy assign the Main Chain and Tail back into the original chain
*/

void	PmergeMe::vecSort()
{
	vec	mainChain;
	vec	pEnd;
	vec	tail;

	++(this->_recurseLv);
	this->_elemSize = std::pow(2, this->_recurseLv - 1);
	this->_vecSortPairs();
	if (std::pow(2, this->_recurseLv) <= (this->_dataVec.size() / 2))
		this->vecSort();
	this->_vecCreateChains(&mainChain, &pEnd, &tail);
	this->_dataVec.erase(this->_dataVec.begin(), this->_dataVec.end());
	this->_vecCombineChains(&mainChain, &pEnd);
	this->_dataVec.insert(this->_dataVec.end(), mainChain.begin(), mainChain.end());
	if (tail.size() > 0)
		this->_dataVec.insert(this->_dataVec.end(), tail.begin(), tail.end());
	--(this->_recurseLv);
	this->_elemSize = std::pow(2, this->_recurseLv - 1);
}

/* Member Functions for deque<int> */
void	PmergeMe::populateDQ(int argc, char *argv[])
{
	for (int i = 1; i < argc; ++i)
		this->_dataDQ.push_back(std::atoi(argv[i]));
}

/* Description: Uses the Ford-Johnson algorithm on a vector. Recursively performs
   the following steps:
	1. Sort pairs
	2. Create the Main Chain, pEnd and Tail
	3. Combine pEnd into the Main Chain using binary insertion
	4. Copy assign the Main Chain and Tail back into the original chain
*/
void	PmergeMe::dqSort()
{
	dq	mainChain;
	dq	pEnd;
	dq	tail;

	++(this->_recurseLv);
	this->_elemSize = std::pow(2, this->_recurseLv - 1);
	this->_dqSortPairs();
	if (std::pow(2, this->_recurseLv) <= (this->_dataDQ.size() / 2))
		this->dqSort();
	this->_dqCreateChains(&mainChain, &pEnd, &tail);
	this->_dataDQ.erase(this->_dataDQ.begin(), this->_dataDQ.end());
	this->_dqCombineChains(&mainChain, &pEnd);
	this->_dataDQ.insert(this->_dataDQ.end(), mainChain.begin(), mainChain.end());
	if (tail.size() > 0)
		this->_dataDQ.insert(this->_dataDQ.end(), tail.begin(), tail.end());
	--(this->_recurseLv);
	this->_elemSize = std::pow(2, this->_recurseLv - 1);
}






/* Static Functions */
/* Description: Function to print out a vector. Mainly used for troubleshooting
*/
void	PmergeMe::printVect(vec vector, std::string name)
{
	std::cout << "Vector Name: " << name << " | ";
	for (vecCIT it = vector.begin(); it != vector.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

/* Description: function to calculate the max number of comparisons given n
   number of inputs. This is used to the check the number of comparisons when
   implementing the Ford-Johnson algorithm
*/
int	PmergeMe::calculateMaxCmpr(int n)
{
	int		result;
	double	intermediate;

	result = 0;
	for (int k = 1; k <= n; ++k)
	{
		intermediate = (3.0 / 4.0) * k;
		result += static_cast<int>(ceil(log2(intermediate)));
	}
	return (result);
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

/* Sorting Functions for Vector<int> */
/* Description: Compares and sort pairs of numbers. Also keeps track of the
   number of comparisons. Recursion level => Element Size => Step size
*/
void	PmergeMe::_vecSortPairs()
{
	int		stepSz;
	int		cmpWindow;
	vecIT	itRHS;
	vecIT	itLHS;

	stepSz = this->_elemSize * 2;
	cmpWindow = stepSz;
	while (static_cast<int>(this->_dataVec.size()) - cmpWindow >= 0)
	{
		itRHS = this->_dataVec.begin() + (cmpWindow - 1);
		itLHS = itRHS - (stepSz / 2);
		if (*itRHS < *itLHS)
			std::swap_ranges(itLHS - (stepSz / 2) + 1, itLHS + 1, itLHS + 1);
		this->_numCmpr++;
		cmpWindow += stepSz;
	}
}

/* Description: creates the Main Chain, pEnd and Tail. Steps:
	1. Insert b1 from the original vector into the Main Chain
	2. Step through the original vector:
		- add all the a1....an into the Main Chain
		- add all the b2....bn into the pEnd
	3. Add the non-participating members into the Tail
*/
void	PmergeMe::_vecCreateChains(vec *mainChain, vec *pEnd, vec *tail)
{
	int		cmpWindow;
	int		tailSz;
	vecCIT	bigIT;
	vecCIT	smallIT;
	vecCIT	tailIT;

	cmpWindow = this->_elemSize * 2;
	mainChain->insert(mainChain->end(), this->_dataVec.begin(), \
	this->_dataVec.begin() + this->_elemSize);
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

/* Description: finds the corresponding bound element in the Main Chain given
   the element in pEnd
*/
int	PmergeMe::_vecFindBoundElem(unsigned int elemN, vec *mainChain)
{
	if ((*mainChain).size() <= elemN * this->_elemSize)
		return (-1);
	return (*(mainChain->begin() + (elemN * this->_elemSize)));
}

/* Description: Rearranges the pEnd in order of insertion based on Jacobsthal
   Numbers. Steps:
	1. Check number of elements in the pEnd
	2. Get the highest Jacobsthal Number (Element N)
	3. Arrange the pEnd elements into the tempPEnd starting from Jacobsthal No = 3
	4. Find the corresponding binding element from the Main Chain -> Add the element
	   bound
	5. If there are elements above the highest Jacobsthal Number, add these
	   elements into tempPEnd starting from the end. Also find the corresponding
	   binding element for each of the elements from pEnd
	6. Erase pEnd and copy assign tempPEnd back into pEnd
*/
void	PmergeMe::_vecParsePEnd(vec *mainChain, vec *pEnd, vec *bound)
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
	if (elemN < 3)
	{
		bound->push_back(this->_vecFindBoundElem(elemN, mainChain));
		return;
	}
	for (unsigned int lv = 3; lv <= jacobLv; ++lv)
	{
		currJacobN = _genJacobsthalNum(lv);
		prevJacobN = _genJacobsthalNum(lv - 1);
		while (currJacobN >  prevJacobN)
		{
			itSt = pEnd->begin() + (this->_elemSize * (currJacobN - 2));
			tempPEnd.insert(tempPEnd.end(), itSt, itSt + this->_elemSize);
			bound->push_back(this->_vecFindBoundElem(currJacobN, mainChain));
			currJacobN--;
		}
	}
	while (elemN > closestJacobN)
	{
		itSt = pEnd->begin() + (this->_elemSize * (elemN - 2));
		tempPEnd.insert(tempPEnd.end(), itSt, itSt + this->_elemSize);
		bound->push_back(this->_vecFindBoundElem(elemN, mainChain));
		elemN--;
	}
	(*pEnd).erase(pEnd->begin(), pEnd->end());
	*pEnd = tempPEnd;
}

/* Description: Steps through each element in the rearranged pEnd and perform
   binary insertion for each of the elements from pEnd. Search area is always
   bound by the binding element
*/

void	PmergeMe::_vecBinaryInsert(vec *mainChain, vec *pEnd, vec *bound)
{
	int		elemNum;
	int		pEndComparator;
	int		mainChainComparator;
	vecIT	boundElemSt;
	vecIT	boundElemEnd;
	vecIT	pEndElem;
	int		boundDist;

	elemNum = (*pEnd).size() / this->_elemSize;
	for (int i = 1; i <= elemNum; ++i)
	{
		boundElemSt = mainChain->begin();
		pEndComparator = *(pEnd->begin() + (i * this->_elemSize) - 1);
		if ((*bound)[i - 1] == -1)
			boundElemEnd = mainChain->end();
		else
			boundElemEnd = std::find(mainChain->begin(), mainChain->end(), (*bound)[i - 1]);
		boundDist = std::distance(boundElemSt, boundElemEnd) / this->_elemSize;
		while (boundDist >= 1)
		{
			boundDist = boundDist / 2;
			mainChainComparator = *(boundElemSt + \
			(boundDist * this->_elemSize) + this->_elemSize - 1);
			if (pEndComparator > mainChainComparator)
				boundElemSt = boundElemSt + ((boundDist + 1) * this->_elemSize);
			else
				boundElemEnd = boundElemSt + (boundDist * this->_elemSize);
			this->_numCmpr++;
		}
		pEndElem = pEnd->begin() + (i - 1) * this->_elemSize;
		mainChain->insert(boundElemSt, pEndElem, pEndElem + this->_elemSize);
	}
}

/* Description: Combines the pEnd into the Main Chain using binary insertion.
   Rearranges pEnd first based on Jacobsthal numbers. Binary insertion elements
   from pEnd. Search area is bound by the corresponding element in the
   Main Chain
*/
void	PmergeMe::_vecCombineChains(vec *mainChain, vec *pEnd)
{
	vec	bound;

	if (pEnd->size() > 0)
	{
		this->_vecParsePEnd(mainChain, pEnd, &bound);
		this->_vecBinaryInsert(mainChain, pEnd, &bound);
	}
}



/* Sorting Functions for Deque<int> */
/* Description: Compares and sort pairs of numbers. Also keeps track of the
   number of comparisons. Recursion level => Element Size => Step size
*/
void	PmergeMe::_dqSortPairs()
{
	int		stepSz;
	int		cmpWindow;
	dqIT	itRHS;
	dqIT	itLHS;

	stepSz = this->_elemSize * 2;
	cmpWindow = stepSz;
	while (static_cast<int>(this->_dataDQ.size()) - cmpWindow >= 0)
	{
		itRHS = this->_dataDQ.begin() + (cmpWindow - 1);
		itLHS = itRHS - (stepSz / 2);
		if (*itRHS < *itLHS)
			std::swap_ranges(itLHS - (stepSz / 2) + 1, itLHS + 1, itLHS + 1);
		this->_numCmpr++;
		cmpWindow += stepSz;
	}
}


/* Description: creates the Main Chain, pEnd and Tail. Steps:
	1. Insert b1 from the original deque into the Main Chain
	2. Step through the original deque:
		- add all the a1....an into the Main Chain
		- add all the b2....bn into the pEnd
	3. Add the non-participating members into the Tail
*/
void	PmergeMe::_dqCreateChains(dq *mainChain, dq *pEnd, dq *tail)
{
	int		cmpWindow;
	int		tailSz;
	dqCIT	bigIT;
	dqCIT	smallIT;
	dqCIT	tailIT;

	cmpWindow = this->_elemSize * 2;
	mainChain->insert(mainChain->end(), this->_dataDQ.begin(), \
	this->_dataDQ.begin() + this->_elemSize);
	bigIT = this->_dataDQ.begin() + this->_elemSize;
	smallIT = this->_dataDQ.begin() + cmpWindow;
	while (static_cast<int>(this->_dataDQ.size()) - cmpWindow >= 0)
	{
		mainChain->insert(mainChain->end(), bigIT, bigIT + this->_elemSize);
		if (static_cast<int>(this->_dataDQ.size()) - (cmpWindow + this->_elemSize) >= 0)
			pEnd->insert(pEnd->end(), smallIT, smallIT + this->_elemSize);
		cmpWindow += this->_elemSize * 2;
		bigIT += this->_elemSize * 2;
		smallIT += this->_elemSize * 2;
	}
	cmpWindow -= this->_elemSize * 2;
	if (static_cast<int>(this->_dataDQ.size()) - (cmpWindow + this->_elemSize) >= 0)
		tailIT = this->_dataDQ.begin() + cmpWindow + this->_elemSize;
	else
		tailIT = this->_dataDQ.begin() + cmpWindow;
	tailSz = this->_dataDQ.end() - tailIT;
	tail->insert(tail->end(), tailIT, tailIT + tailSz);
}

/* Description: finds the corresponding bound element in the Main Chain given
   the element in pEnd
*/
int	PmergeMe::_dqFindBoundElem(unsigned int elemN, dq *mainChain)
{
	if ((*mainChain).size() <= elemN * this->_elemSize)
		return (-1);
	return (*(mainChain->begin() + (elemN * this->_elemSize)));
}

/* Description: Rearranges the pEnd in order of insertion based on Jacobsthal
   Numbers. Steps:
	1. Check number of elements in the pEnd
	2. Get the highest Jacobsthal Number (Element N)
	3. Arrange the pEnd elements into the tempPEnd starting from Jacobsthal No = 3
	4. Find the corresponding binding element from the Main Chain -> Add the element
	   bound
	5. If there are elements above the highest Jacobsthal Number, add these
	   elements into tempPEnd starting from the end. Also find the corresponding
	   binding element for each of the elements from pEnd
	6. Erase pEnd and copy assign tempPEnd back into pEnd
*/
void	PmergeMe::_dqParsePEnd(dq *mainChain, dq *pEnd, dq *bound)
{
	unsigned int	elemN;
	unsigned int	jacobLv;
	unsigned int	closestJacobN;
	int				currJacobN;
	int				prevJacobN;
	dq				tempPEnd;
	dqCIT			itSt;

	elemN = pEnd->size() / this->_elemSize + 1;
	jacobLv = _getNearestJacobsthalLv(elemN);
	closestJacobN = _genJacobsthalNum(jacobLv);
	if (elemN < 3)
	{
		bound->push_back(this->_dqFindBoundElem(elemN, mainChain));
		return;
	}
	for (unsigned int lv = 3; lv <= jacobLv; ++lv)
	{
		currJacobN = _genJacobsthalNum(lv);
		prevJacobN = _genJacobsthalNum(lv - 1);
		while (currJacobN >  prevJacobN)
		{
			itSt = pEnd->begin() + (this->_elemSize * (currJacobN - 2));
			tempPEnd.insert(tempPEnd.end(), itSt, itSt + this->_elemSize);
			bound->push_back(this->_dqFindBoundElem(currJacobN, mainChain));
			currJacobN--;
		}
	}
	while (elemN > closestJacobN)
	{
		itSt = pEnd->begin() + (this->_elemSize * (elemN - 2));
		tempPEnd.insert(tempPEnd.end(), itSt, itSt + this->_elemSize);
		bound->push_back(this->_dqFindBoundElem(elemN, mainChain));
		elemN--;
	}
	(*pEnd).erase(pEnd->begin(), pEnd->end());
	*pEnd = tempPEnd;
}

/* Description: Steps through each element in the rearranged pEnd and perform
   binary insertion for each of the elements from pEnd. Search area is always
   bound by the binding element
*/

void	PmergeMe::_dqBinaryInsert(dq *mainChain, dq *pEnd, dq *bound)
{
	int		elemNum;
	int		pEndComparator;
	int		mainChainComparator;
	dqIT	boundElemSt;
	dqIT	boundElemEnd;
	dqIT	pEndElem;
	int		boundDist;

	elemNum = (*pEnd).size() / this->_elemSize;
	for (int i = 1; i <= elemNum; ++i)
	{
		boundElemSt = mainChain->begin();
		pEndComparator = *(pEnd->begin() + (i * this->_elemSize) - 1);
		if ((*bound)[i - 1] == -1)
			boundElemEnd = mainChain->end();
		else
			boundElemEnd = std::find(mainChain->begin(), mainChain->end(), (*bound)[i - 1]);
		boundDist = std::distance(boundElemSt, boundElemEnd) / this->_elemSize;
		while (boundDist >= 1)
		{
			boundDist = boundDist / 2;
			mainChainComparator = *(boundElemSt + \
			(boundDist * this->_elemSize) + this->_elemSize - 1);
			if (pEndComparator > mainChainComparator)
				boundElemSt = boundElemSt + ((boundDist + 1) * this->_elemSize);
			else
				boundElemEnd = boundElemSt + (boundDist * this->_elemSize);
			this->_numCmpr++;
		}
		pEndElem = pEnd->begin() + (i - 1) * this->_elemSize;
		mainChain->insert(boundElemSt, pEndElem, pEndElem + this->_elemSize);
	}
}

/* Description: Combines the pEnd into the Main Chain using binary insertion.
   Rearranges pEnd first based on Jacobsthal numbers. Binary insertion elements
   from pEnd. Search area is bound by the corresponding element in the
   Main Chain
*/
void	PmergeMe::_dqCombineChains(dq *mainChain, dq *pEnd)
{
	dq	bound;

	if (pEnd->size() > 0)
	{
		this->_dqParsePEnd(mainChain, pEnd, &bound);
		this->_dqBinaryInsert(mainChain, pEnd, &bound);
	}
}
