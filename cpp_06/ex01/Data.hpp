/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:54:22 by mintan            #+#    #+#             */
/*   Updated: 2025/07/30 22:24:08 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
# define DATA_H

#include <string>
#include <iostream>

class	Data
{
	public:
		Data(void);
		Data(int i, float f, std::string str);
		~Data(void);
		int			getInt(void)	const;
		float		getFloat(void)	const;
		std::string	getStr(void)	const;

	private:
		Data(const Data& src);
		Data& operator=(const Data& src);
		int			_intData;
		float		_floatData;
		std::string	_strData;
};

std::ostream&	operator<<(std::ostream &o, Data const &inst);












#endif

