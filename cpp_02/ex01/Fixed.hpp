/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:36:44 by mintan            #+#    #+#             */
/*   Updated: 2025/06/24 11:41:53 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <math.h>

class Fixed
{
	public:
		Fixed(void);						//Default constructor
		Fixed(Fixed const &src);			//Copy constructor
		Fixed(int const orVal);				//Parametric constructor - int
		Fixed(float const orVal);			//Parametric constructor - float
		~Fixed(void);
		Fixed&	operator=(Fixed const &src);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_raw;
		static const int	_numFractBits;
		int					_encode(int const orVal) const;
		int					_encode(float const orVal) const;


};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixedptnum);


#endif
