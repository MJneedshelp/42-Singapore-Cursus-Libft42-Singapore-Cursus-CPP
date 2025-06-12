/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/12 14:12:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

/* Description: Constructor for the Phonebook instance
*/
Phonebook::Phonebook(void):
	_Head(0), _Tail(0), _NumFriends(0)
{

	//Remove all these later
	std::cout << "Creating Phonebook with 8 contact instances\n";
	std::cout << "Initial. Head: " << this->_Head << " | Tail: " << this->_Tail << " | No.: " << this->_NumFriends << "\n";
	for (int i = 0; i < 6; i++)
	{
		AddFriend();
	}
	std::cout << "Later. Head: " << this->_Head << " | Tail: " << this->_Tail << " | No.: " << this->_NumFriends << "\n";

	return;
}

/* Description: Destructor for the Phonebook instance
*/
Phonebook::~Phonebook(void)
{
	std::cout << "Destroying Phonebook\n";
	return;
}

int	Phonebook::GetNumFriends(void) const
{
	return this->_NumFriends;
}

/* Description: Add contacts in a circular fashion at tail index. Increment
   the count as more contacts are added. When the phonebook is full, move
   the head index when adding a new contact
*/
void	Phonebook::AddFriend(void)
{
	//Mj to come back here later. Function to set contact at tail index
	this->_Tail = (this->_Tail + 1) % BOOK_SZ;
	if (this->_NumFriends == BOOK_SZ)
		this->_Head = (this->_Head + 1) % BOOK_SZ;
	else
		this->_NumFriends++;
}

/* Description: Displays the contacts starting from the head to tail in a
   "table"
*/
void	Phonebook::ShowOff(void) const
{
	for (int i = 0; i < this->_NumFriends; i++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i << "|";
		ShowFriendsDetails((this->_Head + i) % BOOK_SZ);
	}
}

/* Description: Formats and displays a contact's first name, last name and
   nicknames. Right align text, truncate if len > 10. Separate by "|"
*/
void	Phonebook::ShowFriendsDetails(int Idx) const
{
	std::string	Val;

	for (int i = 0; i < TABLE_FIELDS; i++)
	{
		Val = this->Contacts[Idx].GetField(i);
		if (Val.length() > 10)
			Val = Val.substr(0, 8).append(".");
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << Val << "|";
	}
	std::cout << std::endl;
}

/* Description: Accesses the contact based on the given order.
*/
void	Phonebook::FindFriend(int Idx) const
{
	int	Found;

	Found = (this->_Head + Idx) % BOOK_SZ;
	this->ExposeFriend(Found);
}

/* Description: Displays the details of the contact. 1 field / line
*/
void	Phonebook::ExposeFriend(int Idx) const
{
	for (int i = 0; i < NO_FIELDS; i++)
	{
		switch (i)
		{
			case 0:
				std::cout << "First Name: ";
				break;
			case 1:
				std::cout << "Last Name: ";
				break;
			case 2:
				std::cout << "Nickname: ";
				break;
			case 3:
				std::cout << "Phone Number: ";
				break;
			case 4:
				std::cout << "U.C.U.DIE: ";
				break;
			default:
				break;
		}
		std:: cout << this->Contacts[Idx].GetField(i) << std::endl;
	}
}
