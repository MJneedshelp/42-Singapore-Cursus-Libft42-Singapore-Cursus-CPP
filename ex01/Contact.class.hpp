/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 18:39:11 by mintan           ###   ########.fr       */
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

	private:
		char	*fname;
		char	*lname;
		char	*nname;
		char	*phnum;
		char	*ucudie;


};

#endif
