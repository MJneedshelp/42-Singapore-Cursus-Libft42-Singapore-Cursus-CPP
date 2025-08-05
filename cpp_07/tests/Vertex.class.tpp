/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.class.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:57:46 by mintan            #+#    #+#             */
/*   Updated: 2025/08/05 14:37:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template<typename T = float>							// default type
class	Vertex
{
	public:
		Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
		~Vertex(void) {}

		/* Getters */
		T const&	getX(void)	const {return(this->_x);}
		T const&	getY(void)	const {return(this->_y);}
		T const&	getZ(void)	const {return(this->_z);}

	private:
		Vertex(void);
		T const	_x;
		T const	_y;
		T const	_z;
};

template<typename T>
std::ostream&	operator<<(std::ostream &o, Vertex<T> const &inst)
{
	std::cout << std::setprecision(1) << std::fixed;
	o << "Vertex | x: " << inst.getX() << " | y: " << inst.getY() << " | z: " << inst.getZ();
	return (o);
}
