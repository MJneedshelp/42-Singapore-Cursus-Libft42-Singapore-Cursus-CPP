/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/06/13 17:47:46 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"
#include "ContactClass.hpp"

#define MSG_DEFAULT1 "[Phonebook] Friends you have: "
#define MSG_DEFAULT2 "Use ADD, SEARCH and EXIT: "
#define MSG_WRONGCMD "You only have (8) friends. Don't be an idiot too"
#define MSG_PROMPTIDX "Which friend do you want to see: "
#define MSG_WRONGIP "You know the second finger on your hand?"
#define MSG_BIGIDX "I don't think you have that many friends..."
#define MSG_ADDFRIEND "Enter your friend details below. Don't leave it blank"
#define MSG_0FRIEND "Go make some friends first..."
#define	MSG_EXIT "\nGoodbye. No friends forever"


/* Description: Function to get the input command from the user
*/
std::string	getCommand(Phonebook *myEightFriends)
{
	std::string	cmd;

	std::cout << MSG_DEFAULT1 << myEightFriends->getNumFriends() << "\n";
	std::cout << MSG_DEFAULT2;
	if (std::getline(std::cin, cmd))
		return(cmd);
	else
		return("EXIT");
}

/* Description: Function to prompt the user to input the phonebook index to
   display. Keeps prompting until valid integer is keyed in the console.
   Returns -1 if [ctrl + d] is received
*/
int	getIndex(Phonebook *myEightFriends)
{
	std::string	input;
	std::string	leftover;
	int			ret;

	while (1)
	{
		std::cout << MSG_PROMPTIDX;
		if (std::getline(std::cin, input))
		{
			std::istringstream Iss(input);
			if ((Iss >> ret) && !(Iss >> leftover))
			{
				if (ret >= myEightFriends->getNumFriends())
					std::cout << MSG_BIGIDX << std::endl;
				else
					return (ret);
			}
			else
				std::cout << MSG_WRONGIP << std::endl;
		}
		else
			return (-1);
	}
}

/* Description: Function to format the output of the
*/
int	main(void)
{
	std::string	cmd;
	int			idx;
	Phonebook	myEightFriends;

	while (cmd != "EXIT")
	{
		cmd = getCommand(&myEightFriends);
		if (cmd == "ADD")
		{
			std::cout << MSG_ADDFRIEND << std::endl;
			if (myEightFriends.addFriend() == -1)
				break;
		}
		else if (cmd == "SEARCH")
		{
			if (myEightFriends.getNumFriends() == 0)
				std::cout << MSG_0FRIEND << std::endl;
			else
			{
				myEightFriends.showOff();
				idx = getIndex(&myEightFriends);
				if (idx == -1)
					break;
				myEightFriends.findFriend(idx);
			}
		}
		else if (cmd != "EXIT")
			std::cout << MSG_WRONGCMD << std::endl;
	}
	std::cout << MSG_EXIT << std::endl;
	return (EXIT_SUCCESS);
}
