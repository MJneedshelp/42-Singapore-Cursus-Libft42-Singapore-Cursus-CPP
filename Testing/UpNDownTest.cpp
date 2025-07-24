/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UpNDownTest.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:30:10 by mintan            #+#    #+#             */
/*   Updated: 2025/07/24 12:02:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <stdexcept>

class Parent				{public: virtual ~Parent(void){}};
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

	//Static Cast test
	Child1	aa;									//Reference value

	Parent	*bb = &aa;							//Implicit upcast			-> ok
	// Child1	*cc = bb;						//Implicit downcast			-> nok
	Child2	*dd = static_cast<Child2*>(bb);		//Explicit downcast			-> ok (but this is going from Child1 -> Parent -> Child2)
	// Orphan	*ee = static_cast<Orphan*>(&aa);	//Explicit conversion		-> nok (you can try compiling but it does not work)


	//Dynamic Cast test
	Child1	qq;									//Reference value
	Parent	*ww = &qq;							//Implicit upcast

	//Explicit downcast: child1 -> parent -> child1
	Child1	*ee = dynamic_cast<Child1*>(ww);
	if (ee == NULL)
	{
		std::cout << "Conversion failed" << std::endl;
	}
	else
	{
		std::cout << "Conversion success" << std::endl;
	}

	//Explicit downcast: child1 -> parent -> child2
	try
	{
		Child2	&rr = dynamic_cast<Child2&>(*ww);
		std::cout << "Dynamic cast succeeded" << std::endl;
	}
	catch(const std::bad_cast &bc)
	{
		std::cout << "Dynamic cast failed at runtime" << bc.what() << std::endl;
		return (0);
	}

	return (0);
}
