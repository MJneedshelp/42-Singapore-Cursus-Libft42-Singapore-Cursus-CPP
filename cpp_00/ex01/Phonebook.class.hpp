/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 19:24:54 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.class.hpp"


#define BOOK_SZ 4

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

		Contact	Contacts[BOOK_SZ];

		int		GetNumFriends(void) const;
		void	AddFriend(void);
		void	ShowOff(void) const;
		void	FindFriend(int Idx) const;

	private:

		int	_Head;
		int	_Tail;
		int	_NumFriends;



};

#endif
