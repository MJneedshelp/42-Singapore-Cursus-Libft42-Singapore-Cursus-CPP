/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/06/12 13:58:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

#define MSG_DEFAULT1 "Number of friends: "
#define MSG_DEFAULT2 "Use ADD, SEARCH and EXIT: "
#define MSG_WRONGCMD "You only have (8) friends. Don't be an idiot too"
#define MSG_PROMPTIDX "Which friend do you want to see: "
#define MSG_WRONGIP "You know the second finger on your hand?"
#define MSG_BIGIDX "I don't think you have that many friends..."



#define	MSG_EXIT "\nGoodbye. No friends forever\n"


/* Description: Function to get the input command from the user
*/
std::string	get_command(Phonebook *MyEightFriends)
{
	std::string	Cmd;

	std::cout << MSG_DEFAULT1 << MyEightFriends->GetNumFriends() << "\n";
	std::cout << MSG_DEFAULT2;
	if (std::getline(std::cin, Cmd))
		return(Cmd);
	else
		return("EXIT");
}

/* Description: Function to prompt the user to input the phonebook index to
   display. Keeps prompting until valid integer is keyed in the console.
   Returns -1 if [ctrl + d] is received
*/
int	get_index(Phonebook *MyEightFriends)
{
	std::string	Input;
	std::string	Leftover;
	int			Ret;

	while (1)
	{
		std::cout << MSG_PROMPTIDX;
		if (std::getline(std::cin, Input))
		{
			std::istringstream Iss(Input);
			if ((Iss >> Ret) && !(Iss >> Leftover))
			{
				if (Ret >= MyEightFriends->GetNumFriends())
					std::cout << MSG_BIGIDX << std::endl;
				else
					return (Ret);
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
	//instantiate the phonebook class
	std::string	Cmd;
	Phonebook	MyEightFriends;

	while (Cmd != "EXIT")
	{
		Cmd = get_command(&MyEightFriends);
		std::cout << Cmd << "\n";
		if (Cmd == "ADD")
		{

		}
		else if (Cmd == "SEARCH")
		{
			MyEightFriends.ShowOff();

			int	x;
			x = get_index(&MyEightFriends);
			if (x == -1)
				break;
			std::cout << "Entered index: " << x << std::endl;
		}
		else if (Cmd != "EXIT")
			std::cout << MSG_WRONGCMD << std::endl;
	}
	std::cout << MSG_EXIT;
	return (EXIT_SUCCESS);
}
