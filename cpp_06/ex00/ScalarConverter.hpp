/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:42 by mintan            #+#    #+#             */
/*   Updated: 2025/07/27 15:05:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <cctype>
#include <iostream>
#include <limits.h>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <cmath>

#define ERR_INCONVERTIBLE "Conversion failed"

class ScalarConverter
{
	public:
		/* Static method */
		static	void	convert(const std::string &input);

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter(void);
		ScalarConverter&	operator=(const ScalarConverter &rhs);

		/* Helper functions - Character */
		static	void		_printChr(const std::string &input);

		/* Helper functions - Integer */
		static	bool		_isInt(const std::string &input);
		static	void		_printInt(const std::string &input);

		/* Helper functions - Float */
		static	bool		_isFloatPLiteral(const std::string &input);
		static	bool		_isFloat(const std::string &input);
		static	void		_printFloat(const std::string &input);

		/* Helper functions - Double */
		static	bool		_isDoublePLiteral(const std::string &input);
		static	bool		_isDouble(const std::string &input);
		static	void		_printDouble(const std::string &input);

		/* Helper functions - General */
		static	bool		_withinIntLimits(const std::string &input);
		static	bool		_withinFloatLimits(const std::string &input);
		static	bool		_withinDoubleLimits(const std::string &input);
		static	bool		_hasPeriod(const std::string &input);
		static	std::string	_strToUpper(const std::string &input);



};
#endif
