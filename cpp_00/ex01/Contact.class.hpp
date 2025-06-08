/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/08 17:07:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
	public:

		Contact(void);
		~Contact(void);

	//get function
	//set function
	//use the set function to set everything to NULL during construction


	private:
		char	*fname;
		char	*lname;
		char	*nname;
		char	*phnum;
		char	*ucudie;
};

#endif
