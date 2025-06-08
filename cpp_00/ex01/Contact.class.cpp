/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/08 16:48:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/* Description: Constructor for the Contact instance. Initialises all the
   contact fields to NULL
*/
Contact::Contact(void):
	fname(NULL), lname(NULL), nname(NULL),
	phnum(NULL), ucudie(NULL)
{
	std::cout << "Creating Contact\n";
	// std::cout << "First Name: " << fname << "\n";

	return;
}

/* Description: Destructor for the Contact instance
*/
Contact::~Contact(void)
{
	std::cout << "Destroying Contact\n";
	return;
}

