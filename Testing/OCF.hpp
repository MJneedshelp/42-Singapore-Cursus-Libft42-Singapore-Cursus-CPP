/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OCF.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:35:11 by mintan            #+#    #+#             */
/*   Updated: 2025/06/22 14:13:31 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OCF_CLASS_H
# define OCF_CLASS_H

#include <iostream>
#include <sstream>


class	OCF
{
	public:
		OCF(void);							//Canonical - Default constructor -> can be left in private if it is not to be used
		OCF(int const n);
		OCF(OCF const &source);				//Canonical - Copy constructor
		~OCF(void);							//Canonical - Default destructor

		OCF&	operator=(OCF const &rhs);	//Canonical - Copy assignment operator

		int	getVal(void) const;

	private:
		int	_n;
};

std::ostream&	operator<<(std::ostream &o, OCF const &inst);

#endif
