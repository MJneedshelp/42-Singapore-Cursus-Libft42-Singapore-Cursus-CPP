/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:55:34 by mintan            #+#    #+#             */
/*   Updated: 2025/09/23 08:32:02 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <string>
#include <limits.h>
#include <cmath>
#include <ctime>
#include <set>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

#define ERR_NOARG "[ERROR] This programme must be run with at least 1 input arg"
#define ERR_INVALIDINPUT "[ERROR] The provided input is not positive integer: "
#define ERR_DUPEINPUT "[ERROR] The provided input is a duplicate: "


enum	e_ContainerType
{
	Vector,
	List
	//name of the second container
};



class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();

		/* Type Definitions - Alias */
		typedef	std::vector<int>					vec;
		typedef	std::vector<int>::const_iterator	vecCIT;
		typedef	std::vector<int>::iterator			vecIT;
		typedef	std::vector<int>::size_type			vecSize;

		typedef	std::list<int>						lst;
		typedef	std::list<int>::const_iterator		lstCIT;
		typedef	std::list<int>::iterator			lstIT;
		typedef	std::list<int>::size_type			lstSize;


		/* Member Functions */
		void					initialiseMbrs();
		int						getNumCmpr()							const;
		bool					validateInput(int argc, char *argv[]);
		void					printContainer(int containerType)		const;		//maybe can make into a template function

		/* Member Functions for vector<int> */
		void					populateVec(int argc, char *argv[]);
		void					vecSort();

		/* Member Functions for list<int> */
		void					populateList(int argc, char *argv[]);
		void					listSort();




		/* Static Functions */
		static	void			printVect(vec vector, std::string name);
		static	void			printList(lst list, std::string name);
		static	int				calculateMaxCmpr(int n);

		/* Public Members */
		int						seqSize;

	private:
		/* Unused OCF */
		PmergeMe(PmergeMe const &src);
		PmergeMe	operator=(PmergeMe const &src);

		/* Private Members */
		vec						_dataVec;
		lst						_dataLst;
		int						_numCmpr;
		int						_recurseLv;
		int						_elemSize;

		/* Helper Functions */
		static	bool			_withinIntLimits(std::string const &input);
		static	bool			_isPosInt(std::string const &input);
		static	unsigned int	_genJacobsthalNum(unsigned int lv);
		static	unsigned int	_getNearestJacobsthalLv(unsigned int jn);

		/* Sorting Functions for Vector<int> */
		void					_vecSortPairs();
		void					_vecCreateChains(vec *mainChain, vec *pEnd, vec *tail);
		int						_vecFindBoundElem(unsigned int elemN, vec *mainChain);
		void					_vecParsePEnd(vec *mainChain, vec *pEnd, vec *bound);
		void					_vecBinaryInsert(vec *mainChain, vec *pEnd, vec *bound);
		void					_vecCombineChains(vec *mainChain, vec *pEnd);

		/* Sorting Functions for List<int> */
		void					_listSortPairs();
		void					_listCreateChains(vec *mainChain, vec *pEnd, vec *tail);
		int						_listFindBoundElem(unsigned int elemN, vec *mainChain);
		void					_listParsePEnd(vec *mainChain, vec *pEnd, vec *bound);
		void					_listBinaryInsert(vec *mainChain, vec *pEnd, vec *bound);
		void					_listCombineChains(vec *mainChain, vec *pEnd);
};
#endif
