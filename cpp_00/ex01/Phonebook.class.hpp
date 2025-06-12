/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/12 18:22:22 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Contact.class.hpp"

#define BOOK_SZ 3

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		int				GetNumFriends(void) const;
		int				AddFriend(void);
		void			ShowOff(void) const;
		void			FindFriend(int Idx) const;
		static	void	PrintContactFields(int Field);

	private:

		Contact	Contacts[BOOK_SZ];
		int	_Head;
		int	_Tail;
		int	_NumFriends;
		void			ExposeFriend(int Idx) const;
		void			ShowFriendsDetails(int Idx) const;





};

#endif
