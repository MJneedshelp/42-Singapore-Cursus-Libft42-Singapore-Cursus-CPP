/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpNDownTest.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:30:10 by mintan            #+#    #+#             */
/*   Updated: 2025/07/18 21:28:03 by mintan           ###   ########.fr       */
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

	Parent	*d = &a;			//Implicit Upcast from specific to -> generic | OK
	Child1	*e = d;				//Implicit Downcast from generic -> specific | NOK
	Child2	*f = (Child2 *)d;	//Explicit Downcast from generic -> specific | OK | But what's the point?




	std::cout << "Memory address of a: " << &a << std::endl;
	std::cout << "Memory address of *b: " << b << std::endl;
	std::cout << "Memory address of *c: " << c << std::endl;
	std::cout << "Memory address of *d: " << d << std::endl;
	std::cout << "Memory address of *f: " << f << std::endl;

	return (0);
}

