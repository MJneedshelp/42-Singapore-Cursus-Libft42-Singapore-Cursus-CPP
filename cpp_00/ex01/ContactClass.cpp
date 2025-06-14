/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 09:38:19 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

/* Description: Constructor for the Contact instance.
*/
Contact::Contact(void)
{
	return;
}

/* Description: Destructor for the Contact instance
*/
Contact::~Contact(void)
{
	return;
}

/* Description: Function to set the fields within the contact class
*/
void	Contact::setFields(int idx, std::string val)
{
	this->_fields[idx] = val;
}

/* Description: Function to retrieve the fields within the contact class
*/
std::string	Contact::getField(int idx) const
{
	return (this->_fields[idx]);
}
