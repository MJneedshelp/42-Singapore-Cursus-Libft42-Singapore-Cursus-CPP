/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/08 16:10:13 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		//circular array of contacts to manage the contact instances
		//non-member function to track the first and last entry in the array, like circular array
		//array of contatct instances
		//functions:
			//Add
			//Search
			//Exit

	private:

		static	int	_StartIdx;
		static	int	_EndIdx;


};

#endif
