/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:42 by mintan            #+#    #+#             */
/*   Updated: 2025/07/26 00:03:55 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <string>
#include <cctype>
#include <iostream>

class ScalarConverter
{
	public:
		/* Static method */
		static	void	convert(std::string input);

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter(void);
		ScalarConverter&	operator=(const ScalarConverter &rhs);

		/* Helper functions */
};
#endif
