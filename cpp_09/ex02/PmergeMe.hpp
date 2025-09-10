/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:55:34 by mintan            #+#    #+#             */
/*   Updated: 2025/09/11 02:29:19 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <string>
#include <limits.h>
#include <cmath>

#include <vector>
#include <algorithm>

#define ERR_NOARG "[ERROR] This programme must be run with at least 1 input arg"
#define ERR_INVALIDINPUT "[ERROR] The provided input is not positive integer: "

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
		typedef	std::vector<int>::const_iterator	vecCIT;
		typedef	std::vector<int>::iterator			vecIT;


		/* Member Functions */
		void	populateVec(int argc, char *argv[]);
		void	vecSort();
		void	printContainer(int containerType)	const;		//maybe can make into a template function


	private:
		/* Unused OCF */
		// PmergeMe();
		PmergeMe(PmergeMe const &src);
		PmergeMe	operator=(PmergeMe const &src);

		/* Private Members */

		std::vector<int>	_dataVec;
		int					_numCmpr;
		int					_recurseLv;

		/* Helper Functions */
		static	bool		_isPosInt(std::string const &input);
		static	bool		_withinIntLimits(std::string const &input);


};


#endif
