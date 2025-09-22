/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:55:34 by mintan            #+#    #+#             */
/*   Updated: 2025/09/22 18:34:18 by mj               ###   ########.fr       */
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
#include <algorithm>
#include <iterator>

#define ERR_NOARG "[ERROR] This programme must be run with at least 1 input arg"
#define ERR_INVALIDINPUT "[ERROR] The provided input is not positive integer: "
#define ERR_DUPEINPUT "[ERROR] The provided input is a duplicate: "


enum	e_ContainerType
{
	Vector
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

		/* Member Functions */
		void	initialiseMbrs();
		int		getNumCmpr()							const;
		bool	validateInput(int argc, char *argv[]);
		void	populateVec(int argc, char *argv[]);
		void	vecSort();
		void	printContainer(int containerType)		const;		//maybe can make into a template function

		/* Static Functions */
		static	void			printVect(vec vector, std::string name);

		/* Public Members */
		int				seqSize;



	private:
		/* Unused OCF */
		PmergeMe(PmergeMe const &src);
		PmergeMe	operator=(PmergeMe const &src);

		/* Private Members */
		vec				_dataVec;
		int				_numCmpr;
		int				_recurseLv;
		int				_elemSize;

		/* Helper Functions */
		static	bool			_withinIntLimits(std::string const &input);
		static	bool			_isPosInt(std::string const &input);
		static	unsigned int	_genJacobsthalNum(unsigned int lv);
		static	unsigned int	_getNearestJacobsthalLv(unsigned int jn);

		/* Sorting Functions for Vector<int> */
		void					_vecSortPairs();
		void					_vecCreateChains(vec *mainChain, vec *pEnd, vec *tail);
		int						_findBoundElem(unsigned int elemN, vec *mainChain);
		void					_vecParsePEnd(vec *mainChain, vec *pEnd, vec *bound);
		void					_vecBinaryInsert(vec *mainChain, vec *pEnd, vec *bound);
		void					_vecCombineChains(vec *mainChain, vec *pEnd);


};
#endif
