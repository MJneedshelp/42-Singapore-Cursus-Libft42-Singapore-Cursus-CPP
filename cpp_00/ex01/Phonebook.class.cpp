/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 08:18:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

/* Description: Constructor for the Phonebook instance
*/
Phonebook::Phonebook(void):
	_StartIdx(0), _EndIdx(0), _NumFriends(0)
{
	std::cout << "Creating Phonebook with 8 contact instances\n";
	Contact	Contacts[2];
	return;
}

/* Description: Destructor for the Phonebook instance
*/
Phonebook::~Phonebook(void)
{
	std::cout << "Destroying Phonebook\n";
	return;
}

int	Phonebook::getNumFriends(void) const
{
	return this->_NumFriends;
}
