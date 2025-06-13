/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:28:35 by mintan            #+#    #+#             */
/*   Updated: 2025/06/13 17:43:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "ContactClass.hpp"

#define BOOK_SZ 3
#define MSG_INVALIDINPUT "Don't you know your friend's name? And NO tabs!"


#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

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
