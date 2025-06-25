/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:36:44 by mintan            #+#    #+#             */
/*   Updated: 2025/06/26 02:32:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);						//Default constructor
		Fixed(Fixed const &src);			//Copy constructor
		Fixed(int const orVal);				//Parametric constructor - int
		Fixed(float const orVal);			//Parametric constructor - float
		~Fixed(void);

		/* Assignment Operator */
		Fixed&	operator=(Fixed const &src);

		/* Comparison Operators */
		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		/* Arithmetic Operators */
		Fixed	operator+(Fixed const &src);
		Fixed	operator-(Fixed const &src);
		Fixed	operator*(Fixed const &src);
		Fixed	operator/(Fixed const &src);

		/* Increment / Decrement Operators */
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		/* Member functions */
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

		static	Fixed&			min(Fixed &f1, Fixed &f2);
		static	Fixed const&	min(Fixed const &f1, Fixed const &f2);
		static	Fixed&			max(Fixed &f1, Fixed &f2);
		static	Fixed const&	max(Fixed const &f1, Fixed const &f2);



	private:
		int					_raw;
		static const int	_numFractBits;
		int					_encode(int const orVal) const;
		int					_encode(float const orVal) const;

};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixedptnum);

#endif
