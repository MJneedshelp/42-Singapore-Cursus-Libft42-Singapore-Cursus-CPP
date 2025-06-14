/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstream.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:22:58 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 17:27:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	infilestr("numbers");
	int				dst1;
	int				dst2;

	infilestr >> dst1 >> dst2;

	std::cout << "Dest 1: " << dst1 << " Dest 2: " << dst2 << std::endl;

	std::ofstream	ofs("outputfile");
	ofs << "This is sorta useful...." << std::endl;
}
