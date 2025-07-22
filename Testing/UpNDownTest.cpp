/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpNDownTest.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:30:10 by mintan            #+#    #+#             */
/*   Updated: 2025/07/22 15:00:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent				{};
class Child1: public Parent	{};
class Child2: public Parent	{};

class Orphan				{};
/* ************************************************************************** */

int	main(void)
{
	Child1	a;					//Reference value

	Parent	*b = &a;			//Implicit "reinterpretation" cast
	Parent	*c = (Parent *)&a;	//Explicit "reinterpretation" cast

	Parent	*d = &a;			//Implicit Upcast from specific to -> generic | OK
	// Child1	*e = d;				//Implicit Downcast from generic -> specific | NOK
	Child2	*f = (Child2 *)d;	//Explicit Downcast from generic -> specific | OK | But what's the point?

	std::cout << "Memory address of a: " << &a << std::endl;
	std::cout << "Memory address of *b: " << b << std::endl;
	std::cout << "Memory address of *c: " << c << std::endl;
	std::cout << "Memory address of *d: " << d << std::endl;
	std::cout << "Memory address of *f: " << f << std::endl;

	Child1	aa;					//Reference value

	Parent	*bb = &aa;							//Implicit upcast			-> ok
	// Child1	*cc = bb;						//Implicit downcast			-> nok
	Child2	*dd = static_cast<Child2*>(bb);		//Explicit downcast			-> ok (but this is going from Child1 -> Parent -> Child2)
	Orphan	*ee = static_cast<Orphan*>(&aa);	//Explicit conversion		-> nok (you can try compiling but it does not work)



	return (0);
}
