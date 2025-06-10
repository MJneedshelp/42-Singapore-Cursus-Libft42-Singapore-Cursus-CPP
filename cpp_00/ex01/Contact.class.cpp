/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 08:43:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/* Description: Constructor for the Contact instance.
*/
Contact::Contact(void)
{
	std::cout << "Creating Contact\n";
	return;
}

/* Description: Destructor for the Contact instance
*/
Contact::~Contact(void)
{
	std::cout << "Destroying Contact\n";
	return;
}

/* Description: Function to set the fields within the contact class
*/
void	Contact::SetFields(int Idx, std::string Val)
{
	this->Fields[Idx] = Val;
}
