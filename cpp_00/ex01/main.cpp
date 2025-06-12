/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/06/12 10:45:27 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

#define MSG_DEFAULT1 "Number of friends: "
#define MSG_DEFAULT2 "Use ADD, SEARCH and EXIT: "
#define MSG_WRONGCMD "You only have (8) friends. Don't be an idiot too\n"
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
   display
*/


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
		}
		else if (Cmd != "EXIT")
			std::cout << MSG_WRONGCMD;
	}
	std::cout << MSG_EXIT;
	return (EXIT_SUCCESS);
}
