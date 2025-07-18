/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpNDownTest.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:30:10 by mintan            #+#    #+#             */
/*   Updated: 2025/07/18 21:01:55 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent				{};
class Child1: public Parent	{};
class Child2: public Parent	{};

/* ************************************************************************** */

int	main(void)
{
	Child1	a;					//Reference value

	Parent	*b = &a;			//Implicit "reinterpretation" cast
	Parent	*c = (Parent *)&a;	//Explicit "reinterpretation" cast





	std::cout << "Memory address of a: " << &a << std::endl;
	std::cout << "Memory address of *b: " << b << std::endl;
	std::cout << "Memory address of *c: " << c << std::endl;


}

