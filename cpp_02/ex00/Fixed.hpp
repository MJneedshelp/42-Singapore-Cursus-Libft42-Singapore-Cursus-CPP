/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:36:44 by mintan            #+#    #+#             */
/*   Updated: 2025/06/24 02:38:54 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed&	operator=(Fixed const &src);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;

	private:
		int					_raw;
		static const int	_numFractBits;
};


#endif
