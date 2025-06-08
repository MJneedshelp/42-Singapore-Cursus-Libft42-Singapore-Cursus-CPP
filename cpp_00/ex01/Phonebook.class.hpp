/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/08 17:41:31 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
			//Add: use the start and end index to know which one to replace
			//Search
			//Exit
			//print contacts:use the start and end index to know which one to print first
		int	getNumFriends(void) const;

	private:

		int	_StartIdx;
		int	_EndIdx;
		int	_NumFriends;



};

#endif
