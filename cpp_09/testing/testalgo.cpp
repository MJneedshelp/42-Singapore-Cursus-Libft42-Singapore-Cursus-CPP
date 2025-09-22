/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testalgo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:26:11 by mintan            #+#    #+#             */
/*   Updated: 2025/09/22 18:24:05 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits.h>
#include <cmath>

#include <vector>
#include <set>

#include <algorithm>
#include <iterator>

typedef	std::vector<int>::iterator			vecIT;

void    printVec(std::vector<int> vec)
{
    for (vecIT it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}



int main(void)
{
    std::vector<int>	vec;
	std::vector<int>	vecIns;
	std::vector<int>	vecCpy;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    printVec(vec);
    std::swap_ranges(vec.begin(), vec.begin() + 1, vec.begin() + 1);
    printVec(vec);

	vecIns.insert(vecIns.end(), vec.begin(), vec.begin() + 2);
    printVec(vecIns);

	vecIns.insert(vecIns.end(), vec.begin() + 2, vec.begin() + 4);
    printVec(vecIns);

	vec.erase(vec.begin(), vec.end());
    printVec(vec);
	std::cout << "vec size: " << vec.size() << std::endl;


	vec = vecIns;
    printVec(vec);

	vecIns.push_back(1);
    printVec(vecIns);
    printVec(vec);

	std::cout << "vec size: " << vec.size() << std::endl;

	int	result;
	int	start;
	int	divisor;
	int	ctr;

	start = 3;
	divisor = 2;
	ctr = 0;
	result = start / divisor;
	while (result >= 1)
	{
		result = result / divisor;
		ctr++;
	}
	std::cout << "counter: " << ctr << std::endl;


	std::set<int>	testSet;

	std::cout << "Test insert 1: " << testSet.insert(1).second << std::endl;
	std::cout << "Test insert 1: " << testSet.insert(1).second << std::endl;
	std::cout << "Test set: ";
	for (std::set<int>::const_iterator it = testSet.begin(); it != testSet.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;








    return (0);
}
