/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 10:16:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
#include <sstream>

#define NO_FIELDS 5
#define TABLE_FIELDS 3

/* Description: Contact class
	- Fields[5]: first name, last name, nickname, phone no., ucudie
*/

class Contact
{
	public:

		Contact(void);
		~Contact(void);
		void		setFields(int idx, std::string val);
		std::string	getField(int idx) const;

	private:
		std::string	_fields[5];
};

#endif
