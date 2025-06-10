/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 11:10:14 by mintan           ###   ########.fr       */
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
	// Contact	Contacts[BOOK_SZ];

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
	//Mj to come back here later. set contact at tail index

	//remove this later. Use this to test printing
	// std::ostringstream	oss;
	// oss << this->_Tail;
	// this.
	// Contact::SetFields(this->_Tail, this->_Tail.)



	this->_Tail = (this->_Tail + 1) % BOOK_SZ;
	if (this->_NumFriends == BOOK_SZ)
		this->_Head = (this->_Head + 1) % BOOK_SZ;
	else
		this->_NumFriends++;
}

/* Description: Displays the contacts starting from the head to tail.
*/
void	Phonebook::ShowOff(void)
{
	//Mj to come back here later. set contact at tail index
	this->_Tail = (this->_Tail + 1) % BOOK_SZ;
	if (this->_NumFriends == BOOK_SZ)
		this->_Head = (this->_Head + 1) % BOOK_SZ;
	else
		this->_NumFriends++;
}
