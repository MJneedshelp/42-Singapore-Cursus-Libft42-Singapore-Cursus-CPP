/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:54 by mintan            #+#    #+#             */
/*   Updated: 2025/07/29 01:28:41 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void	ScalarConverter::convert(const std::string &input)
{
	const	int	type = _determineType(input);

	switch (type)
	{
		case CHAR:
		{

			break;
		}
		case INT:
		{

			break;
		}
		case FLOAT:
		{

			break;
		}
		case DOUBLE:
		{

			break;
		}




		default:
			break;
	}
}
