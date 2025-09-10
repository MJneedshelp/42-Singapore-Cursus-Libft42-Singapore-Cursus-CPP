/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:55:34 by mintan            #+#    #+#             */
/*   Updated: 2025/09/10 22:13:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_H
# define PMERGEME_H

#include <iostream>
#include <vector>
#include <algorithm>

#define ERR_NOARG "[ERROR] This programme must be run with 1 arg: rpn expression"
#define ERR_INVALIDINPUT "[ERROR] The provided input is not an integer or an operator: "

enum	e_ContainerType
{
	Vector
	//name of the second container
};



class PmergeMe
{
	public:
		PmergeMe(char *argv[]);
		~PmergeMe();


		/* Member Functions */
		void	populateVec();
		void	printContainer(int containerType);		//maybe can make into a template function


	private:
		/* Unused OCF */
		PmergeMe();
		PmergeMe(PmergeMe const &src);
		PmergeMe	operator=(PmergeMe const &src);

		/* Private Members */

		std::vector<int>	dataVec;

		/* Helper Functions */


};


#endif
