/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/13 17:39:29 by mintan           ###   ########.fr       */
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
void	Contact::setFields(int Idx, std::string Val)
{
	this->Fields[Idx] = Val;
}

/* Description: Function to retrieve the fields within the contact class
*/
std::string	Contact::getField(int Idx) const
{
	return (this->Fields[Idx]);
}
