/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:07:52 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 13:17:26 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"
#include "ContactClass.hpp"

/* Description: Checks if a string contains at least 1 alphanumeric char.
   Const ensures that the input string is not modified. &input makes
   reference to the original string rather than copying it.
*/
bool	isValidInput(const std::string& input)
{
	bool	ret;

	ret = false;
	if (input.length() > 0)
	{
		for (unsigned int i = 0; i < input.length(); ++i)
		{
			if (std::isalnum(static_cast<unsigned char>(input[i])))
				ret = true;
			if (static_cast<unsigned char>(input[i]) == '\t')
			{
				ret = false;
				break;
			}
		}
	}
	return (ret);
}

/* Description: Constructor for the Phonebook instance
*/
Phonebook::Phonebook(void):
	_head(0), _tail(0), _numFriends(0)
{
	return;
}

/* Description: Destructor for the Phonebook instance
*/
Phonebook::~Phonebook(void)
{
	return;
}

int	Phonebook::getNumFriends(void) const
{
	return this->_numFriends;
}

/* Description: Add contacts in a circular fashion at tail index. Increment
   the count as more contacts are added. When the phonebook is full, move
   the head index when adding a new contact
*/
int	Phonebook::addFriend(void)
{
	std::string	input;

	for (int i = 0; i < NO_FIELDS; i++)
	{
		while (1)
		{
			Phonebook::printContactFields(i);
			if (std::getline(std::cin, input))
			{
				if (isValidInput(input))
				{
					this->Contacts[this->_tail].setFields(i, input);
					break;
				}
				std::cout << MSG_INVALIDINPUT << std::endl;
			}
			else
				return (-1);
		}
	}
	this->_tail = (this->_tail + 1) % BOOK_SZ;
	if (this->_numFriends == BOOK_SZ)
		this->_head = (this->_head + 1) % BOOK_SZ;
	else
		this->_numFriends++;
	return (0);
}

/* Description: Displays the contacts starting from the head to tail in a
   "table"
*/
void	Phonebook::showOff(void) const
{
	std::string Header;
	for (int i = 0; i < TABLE_FIELDS + 1; i++)
	{
		switch (i)
		{
			case 0:
				Header = "Index";
				break;
			case 1:
				Header = "First Name";
				break;
			case 2:
				Header = "Last Name";
				break;
			case 3:
				Header = "Nickname";
				break;
			default:
				break;
		}
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << Header << "|";
	}
	std::cout << std::endl;
	for (int i = 0; i < this->_numFriends; i++)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i << "|";
		this->showFriendsDetails((this->_head + i) % BOOK_SZ);
	}
}

/* Description: Formats and displays a contact's first name, last name and
   nicknames. Right align text, truncate if len > 10. Separate by "|"
*/
void	Phonebook::showFriendsDetails(int Idx) const
{
	std::string	Val;

	for (int i = 0; i < TABLE_FIELDS; i++)
	{
		Val = this->Contacts[Idx].getField(i);
		if (Val.length() > 10)
			Val = Val.substr(0, 8).append(".");
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << Val << "|";
	}
	std::cout << std::endl;
}

/* Description: Accesses the contact based on the given order.
*/
void	Phonebook::findFriend(int Idx) const
{
	int	Found;

	Found = (this->_head + Idx) % BOOK_SZ;
	this->exposeFriend(Found);
}

/* Description: Displays the details of the contact. 1 field / line
*/
void	Phonebook::exposeFriend(int Idx) const
{
	for (int i = 0; i < NO_FIELDS; i++)
	{
		Phonebook::printContactFields(i);
		std:: cout << this->Contacts[Idx].getField(i) << std::endl;
	}
}

/* Description: Switch case to print the different contact field names
*/
void	Phonebook::printContactFields(int Field)
{
	switch (Field)
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
}


