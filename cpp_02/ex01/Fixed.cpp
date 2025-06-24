/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:48:23 by mintan            #+#    #+#             */
/*   Updated: 2025/06/24 10:22:02 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::_numFractBits = 8;

Fixed::Fixed(void): _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Description: Constructor where the _raw is encoded based on the original
   int value
*/
Fixed::Fixed(int const orVal)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(this->_encode(orVal));
	return;
}

/* Description: Constructor where the _raw is encoded based on the original
   float value
*/
Fixed::Fixed(float const orVal)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(this->_encode(orVal));
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed&	Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_raw = src.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

/* Description: encodes the input value (int) as a fixed point number
*/
int	Fixed::_encode(int const orVal)
{
	return (orVal * (1 << Fixed::_numFractBits));
}

/* Description: encodes the input value (float) as a fixed point number.
   Rounding is used to ensure the closest integer
*/
int	Fixed::_encode(float const orVal)
{
	return (roundf(orVal * (1 << Fixed::_numFractBits)));
}
