/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/08 16:16:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int	Phonebook::_StartIdx = 0;
int	Phonebook::_EndIdx = 0;

/* Description: Constructor for the Phonebook
*/
Phonebook::Phonebook(void)
{
	std::cout << "Creating Phonebook\n";
	return;
}

/* Description: Destructor for the Phonebook
*/
Phonebook::~Phonebook(void)
{
	std::cout << "Destroying Phonebook\n";
	return;
}

