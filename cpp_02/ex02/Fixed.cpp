/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:48:23 by mintan            #+#    #+#             */
/*   Updated: 2025/06/26 02:33:12 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	const Fixed::_numFractBits = 8;

Fixed::Fixed(void): _raw(0)
{
	return;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

/* Description: Constructor where the _raw is encoded based on the original
   int value
*/
Fixed::Fixed(int const orVal)
{
	this->setRawBits(this->_encode(orVal));
	return;
}

/* Description: Constructor where the _raw is encoded based on the original
   float value
*/
Fixed::Fixed(float const orVal)
{
	this->setRawBits(this->_encode(orVal));
	return;
}

/* Description: Destructor for the Fixed class
*/
Fixed::~Fixed(void)
{
	return;
}

/* Description: = operator overload for assigning the raw value of the fixed
   point number
*/
Fixed&	Fixed::operator=(Fixed const &src)
{
	if (this != &src)
		this->_raw = src.getRawBits();
	return (*this);
}

/* Description: > operator overload comparison using the raw value of the
   fixed point number
*/
bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_raw > rhs.getRawBits());
}

/* Description: < operator overload comparison using the raw value of the
   fixed point number
*/
bool	Fixed::operator<(Fixed const &rhs) const
{
	return (rhs > *this);
}

/* Description: >= operator overload comparison using the raw value of the
   fixed point number
*/
bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (!(*this < rhs));
}

/* Description: <= operator overload comparison using the raw value of the
   fixed point number
*/
bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (!(*this > rhs));
}

/* Description: == operator overload comparison using the raw value of the
   fixed point number
*/
bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_raw == rhs.getRawBits());
}

/* Description: != operator overload comparison using the raw value of the
   fixed point number
*/
bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (!(*this == rhs));
}

/* Description: + operator overload for summing 2 fixed point numbers
*/
Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

/* Description: - operator overload for subtracting 1 fixed point number from
   the other
*/
Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

/* Description: * operator overload for multiplying 2 fixed point numbers
*/
Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits((this->getRawBits() * rhs.getRawBits()) \
	/ (1 << Fixed::_numFractBits));
	return (result);
}

/* Description: / operator overload for dividing 2 fixed point numbers
*/
Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed	result;

	result.setRawBits((this->getRawBits() << Fixed::_numFractBits) \
	/ rhs.getRawBits());
	return (result);
}

/* Description: ++ operator overload for pre-increment
*/
Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

/* Description: ++ operator overload for post-increment. Copies the old
   instance and returns that first
*/
Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	++*this;
	return (old);
}

/* Description: -- operator overload for pre-decrement
*/
Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

/* Description: -- operator overload for post-decrement. Copies the old
   instance and returns that first
*/
Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;
	--*this;
	return (old);
}

/* Description: sets the raw value of the fixed point number
*/
void	Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

/* Description: retrieves the raw value of the fixed point number
*/
int	Fixed::getRawBits(void) const
{
	return (this->_raw);
}

/* Description: decodes the fixed point number and returns it as a float.
   this->_raw is cast as a float first before decoding
*/
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_raw) / (1 << Fixed::_numFractBits));
}

/* Description: decodes _raw (fixed point number) and returns it as an int
*/
int	Fixed::toInt(void) const
{
	return (this->_raw >> Fixed::_numFractBits);
}

/* Description: returns the reference to the min between 2 fixed point numbers.
   The result from this function can be modified
*/
Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

/* Description: returns the reference to the min between 2 constant fixed point
   numbers. The result from this function cannot be modified
*/
Fixed const&	Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 <= f2)
		return (f1);
	return (f2);
}

/* Description: returns the reference to the max between 2 fixed point numbers.
   The result from this function can be modified
*/
Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
}

/* Description: returns the reference to the max between 2 constant fixed point
   numbers. The result from this function cannot be modified
*/
Fixed const&	Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 >= f2)
		return (f1);
	return (f2);
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
