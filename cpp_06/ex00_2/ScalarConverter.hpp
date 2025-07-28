/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:42 by mintan            #+#    #+#             */
/*   Updated: 2025/07/29 01:25:42 by mintan           ###   ########.fr       */
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
	DOUBLE
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

		/* Helper functions */
		static	int	_determineType(const std::string &input);




};
#endif
