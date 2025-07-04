/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:48:23 by mintan            #+#    #+#             */
/*   Updated: 2025/06/24 23:09:50 by mintan           ###   ########.fr       */
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
	return (this->_raw);
}

/* Description: decodes _raw (fixed point number) and returns it as an int
*/
int	Fixed::toInt(void) const
{
	return (this->_raw >> Fixed::_numFractBits);
}

/* Description: decodes the fixed point number and returns it as a float.
   this->_raw is cast as a float first before decoding
*/
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_raw) / (1 << Fixed::_numFractBits));
}

/* Description: encodes the input value (int) as a fixed point number
*/
int	Fixed::_encode(int const orVal) const
{
	return (orVal << Fixed::_numFractBits);
}

/* Description: encodes the input value (float) as a fixed point number.
   Rounding is used to ensure the closest integer
*/
int	Fixed::_encode(float const orVal) const
{
	return (roundf(orVal * (1 << Fixed::_numFractBits)));
}

/* Description: Overloads the << operator to return the fixed point number as
   a float
*/
std::ostream&	operator<<(std::ostream &o, Fixed const &fixedptnum)
{
	o << fixedptnum.toFloat();
	return (o);
}
