/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:42 by mintan            #+#    #+#             */
/*   Updated: 2025/07/29 08:54:07 by mintan           ###   ########.fr       */
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

enum	e_Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NOTINLIST
};

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

		/* Helper functions - Determine Char */
		static	bool	_isChar(const std::string &input);

		/* Helper functions - Determine Int */
		static	bool	_isWholeNum(const std::string &input);
		static	bool	_withinIntLimits(const std::string &input);
		static	bool	_isInt(const std::string &input);

		/* Helper functions - Determine Double */
		static	bool	_isDoublePLiteral(const std::string &input);
		static	bool	_isDouble(const std::string &input);

		/* Helper functions - Determine Float */
		static	bool	_isFloatPLiteral(const std::string &input);
		static	bool	_isFloat(const std::string &input);

		/* Helper functions - General */
		static	std::string	_strToUpper(const std::string &input);




		static	int		_determineType(const std::string &input);





};
#endif
