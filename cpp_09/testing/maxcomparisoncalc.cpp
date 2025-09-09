/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxcomparisoncalc.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:52:37 by mintan            #+#    #+#             */
/*   Updated: 2025/09/09 15:11:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>

/* Description: function to calculate the max number of comparisons given n 
   number of inputs. This is used to the check the number of comparisons when 
   implementing the Ford-Johnson algorithm
*/
int F(int n)
{
    int     result;
    double  intermediate;

    result = 0;
    for (int k = 1; k <= n; ++k)
    {
        intermediate = (3.0 / 4.0) * k;
        result += static_cast<int>(ceil(log2(intermediate)));
    }
    return (result);
}


int main(void)
{
    for (int i = 1; i < 22; ++i)
    {
        std::cout << "n: " << i << " | max comparisons: " << F(i) << std::endl;
    }
    return (0);
}