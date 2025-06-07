/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 22:51:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
	public:

		Contact(void);
		~Contact(void);

	//get function
	//set function

	private:
		char	*fname;
		char	*lname;
		char	*nname;
		char	*phnum;
		char	*ucudie;


};

#endif
