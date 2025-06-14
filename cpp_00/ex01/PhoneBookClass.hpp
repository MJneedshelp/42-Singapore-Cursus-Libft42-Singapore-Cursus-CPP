/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 10:16:22 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "ContactClass.hpp"

#define BOOK_SZ 8
#define MSG_INVALIDINPUT "Don't you know your friend's name? And NO tabs!"

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		int				getNumFriends(void) const;
		int				addFriend(void);
		void			showOff(void) const;
		void			findFriend(int Idx) const;
		static	void	printContactFields(int Field);

	private:

		Contact	Contacts[BOOK_SZ];
		int	_head;
		int	_tail;
		int	_numFriends;
		void			exposeFriend(int Idx) const;
		void			showFriendsDetails(int Idx) const;
};

#endif
