/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/11 01:12:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

/* Description: Constructor for the Phonebook instance
*/
Phonebook::Phonebook(void):
	_Head(0), _Tail(0), _NumFriends(0)
{
	std::cout << "Creating Phonebook with 8 contact instances\n";
	std::cout << "Initial. Head: " << this->_Head << " | Tail: " << this->_Tail << " | No.: " << this->_NumFriends << "\n";

	for (int i = 0; i < 6; i++)
	{
		AddFriend();
	}

	std::cout << "Later. Head: " << this->_Head << " | Tail: " << this->_Tail << " | No.: " << this->_NumFriends << "\n";

	ShowOff();

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

/* Description: Displays the contacts starting from the head to tail.
*/
void	Phonebook::ShowOff(void) const
{
	std::cout << "Start show off" << std::endl;

	for (int i = 0; i < this->_NumFriends; i++)
	{
		//function to display the the contact starting from the head
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i << "|";
		ShowFriendDetails((this->_Head + i) % BOOK_SZ);
	}
}

void	Phonebook::ShowFriendDetails(int Idx) const
{
	std::string	Val;

	for (int i = 0; i < 3; i++)
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

	std::cout << "Find friend" << std::endl;

	Found = (this->_Head + Idx) % BOOK_SZ;
	//function to display the found friend
	std::cout << "Given index: " << Idx << " | Calculated index: " << Found << std::endl;
}


