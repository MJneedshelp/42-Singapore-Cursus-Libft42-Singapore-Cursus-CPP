/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:58:53 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 19:40:05 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	{
		std::cout << "========== Test 0: assigned size is 0 ==========" << std::endl;
		try
		{
			Span	spZero(0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n========== Test 1: assigned size is 1 ==========" << std::endl;
		Span	spOne(1);

		std::cout << "===== Test 1a: add number (within size)=====" << std::endl;
		spOne.addNumber(42);
		std::cout << spOne << std::endl;

		std::cout << "===== Test 1b: add number (beyond size) =====" << std::endl;
		try
		{
			spOne.addNumber(-42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "===== Test 1c: shortest span of 1 =====" << std::endl;
		try
		{
			std::cout << "Shortest span: " << spOne.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "===== Test 1d: longest span of 1 =====" << std::endl;
		try
		{
			std::cout << "Longest span: " << spOne.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n========== Test 2: check spans ==========" << std::endl;
		Span	spTen(10);

		spTen.addNumber(6);
		spTen.addNumber(3);
		spTen.addNumber(17);
		spTen.addNumber(9);
		spTen.addNumber(11);
		std::cout << spTen << std::endl;

		std::cout << "===== Test 2a: shortest span =====" << std::endl;
		std::cout << "Shortest span: " << spTen.shortestSpan() << std::endl;

		std::cout << "===== Test 2b: longest span =====" << std::endl;
		std::cout << "Longest span: " << spTen.longestSpan() << std::endl;
	}
	{
		std::cout << "\n========== Test 3: duplicate / -ve val ==========" << std::endl;
		Span	spDup(10);

		spDup.addNumber(-5);
		spDup.addNumber(3);
		spDup.addNumber(-5);
		spDup.addNumber(0);
		spDup.addNumber(42);
		std::cout << spDup << std::endl;
	}

	//test span with at least 10,000 numbers
	//try with more numbers, might be testing for speed, so better only sort
	//once at the end for add range

	return(0);
}
