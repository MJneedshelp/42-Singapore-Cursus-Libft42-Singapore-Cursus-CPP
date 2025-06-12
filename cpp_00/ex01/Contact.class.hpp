/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/12 10:35:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

#define NO_FIELDS 5
#define TABLE_FIELDS 3



#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

/* Description: Contact class
	- Fields[5]: first name, last name, nickname, phone no., ucudie
*/

class Contact
{
	public:

		Contact(void);
		~Contact(void);
		void		SetFields(int Idx, std::string Val);
		std::string	GetField(int Idx) const;

	//get function
	//set function


	private:
		std::string	Fields[5];
};

#endif
