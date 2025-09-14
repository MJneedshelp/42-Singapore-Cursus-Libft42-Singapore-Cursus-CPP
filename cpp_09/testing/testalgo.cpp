/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testalgo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mj <mj@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:26:11 by mintan            #+#    #+#             */
/*   Updated: 2025/09/14 19:09:14 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits.h>
#include <cmath>

#include <vector>
#include <algorithm>

typedef	std::vector<int>::iterator			vecIT;

void    printVec(std::vector<int> vec)
{
    for (vecIT it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}



int main(void)
{
    std::vector<int>    vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    printVec(vec);
    std::swap_ranges(vec.begin(), vec.begin() + 1, vec.begin() + 1);
    printVec(vec);

    return (0);
}
