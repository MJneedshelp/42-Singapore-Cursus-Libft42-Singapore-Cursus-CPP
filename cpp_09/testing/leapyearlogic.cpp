/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leapyearlogic.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 17:35:17 by mintan            #+#    #+#             */
/*   Updated: 2025/09/02 17:18:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

bool	_isLeapYear(int const year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return (true);
            return (false);
        }
        return (true);
    }
    return (false);
}

int main(void)
{
    int y1 = 1996;
    int y2 = 1999;
    int y3 = 2000;
    int y4 = 2100;
    int y5 = 2200;
    int y6 = 2400;
    int y7 = 1600;
    int y8 = 2024;
    int y9 = 2025;
    int y10 = 2103;


    std::cout << y1 << ": " << _isLeapYear(y1) << std::endl;
    std::cout << y2 << ": " << _isLeapYear(y2) << std::endl;
    std::cout << y3 << ": " << _isLeapYear(y3) << std::endl;
    std::cout << y4 << ": " << _isLeapYear(y4) << std::endl;
    std::cout << y5 << ": " << _isLeapYear(y5) << std::endl;
    std::cout << y6 << ": " << _isLeapYear(y6) << std::endl;
    std::cout << y7 << ": " << _isLeapYear(y7) << std::endl;
    std::cout << y8 << ": " << _isLeapYear(y8) << std::endl;
    std::cout << y9 << ": " << _isLeapYear(y9) << std::endl;
    std::cout << y10 << ": " << _isLeapYear(y10) << std::endl;


    return (0);
}
