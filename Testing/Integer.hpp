/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 03:36:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/20 13:06:23 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

#include <iostream>
#include <string>


class Integer
{
	public:
		Integer(int const n);
		~Integer(void);

		int	getValue(void) const;

		Integer&	operator=(Integer const &rhs);
		Integer		operator+(Integer const &rhs) const;


	private:
		int	_n;
};

std::ostream&	operator<<(std::ostream &o, Integer const &rhs);

#endif
