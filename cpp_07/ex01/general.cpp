/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:54:15 by mintan            #+#    #+#             */
/*   Updated: 2025/08/07 12:05:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

void	underscoreStr(std::string&str)
{
	str = str + "_";
}

void	incrementFloat(float &val)
{
	++val;
}
