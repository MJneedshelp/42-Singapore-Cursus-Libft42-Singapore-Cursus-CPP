/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 09:58:53 by mintan            #+#    #+#             */
/*   Updated: 2025/08/25 01:39:29 by mintan           ###   ########.fr       */
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
	{
		std::cout << "\n========== Test 4: Add range (max size: 10)==========" << std::endl;
		Span	spRng(10);

		for (int i = 0; i < 3; ++i)
			spRng.addNumber(i);
		std::cout << spRng << std::endl;

		std::cout << "===== Test 4a: Add int vector range =====" << std::endl;
		std::vector<int>	rngVec(3, 42);

		spRng.addRange(rngVec.begin(), rngVec.end());
		std::cout << spRng << std::endl;

		std::cout << "===== Test 4b: Add int list range =====" << std::endl;
		std::list<int>	rngList(3, -24);

		spRng.addRange(rngList.begin(), rngList.end());
		std::cout << spRng << std::endl;

		std::cout << "===== Test 4c: Add int deque range (exceed) =====" << std::endl;
		std::deque<int>	rngDq(3, 99);

		try
		{
			spRng.addRange(rngDq.begin(), rngDq.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << spRng << std::endl;
	}
	{
		std::cout << "\n========== Test 5: OCF  ==========" << std::endl;
		Span				spOr(10);
		Span				spCpyAss(42);
		std::vector<int>	rngVec(3, 42);

		for (int i = 0; i < 8; ++i)
			spOr.addNumber(i * 3);
		std::cout << spOr << std::endl;

		std::cout << "===== Test 5a: Copy assignment operator (contents) =====" << std::endl;
		spCpyAss = spOr;
		spOr.addNumber(-42);
		std::cout << "Original: " << spOr << std::endl;
		std::cout << "Copy assigned: " << spCpyAss << std::endl;

		std::cout << "===== Test 5b: Copy assignment operator (size) =====" << std::endl;
		try
		{
			spCpyAss.addRange(rngVec.begin(), rngVec.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "===== Test 5c: Copy constructor (contents) =====" << std::endl;
		Span				spCpy(spOr);

		spOr.addNumber(-24);
		std::cout << "Original: " << spOr << std::endl;
		std::cout << "Copy constructed: " << spCpy << std::endl;

		std::cout << "===== Test 5d: Copy constructor (size) =====" << std::endl;
		try
		{
			spCpy.addRange(rngVec.begin(), rngVec.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n========== Test 6: Big ass span ==========" << std::endl;
		Span				spBass(20000);
		std::vector<int>	vecBass(20000);

		for (int i = 0; i < 20000; ++i)
			vecBass[i] = i * 2;
		spBass.addRange(vecBass.begin(), vecBass.end());
		std::cout << spBass << std::endl;
	}
	return(0);
}
