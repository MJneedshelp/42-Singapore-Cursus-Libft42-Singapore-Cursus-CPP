/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 18:49:30 by mintan            #+#    #+#             */
/*   Updated: 2025/06/09 08:48:39 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

#define MSG_DEFAULT1 "Number of friends: "
#define MSG_DEFAULT2 "Use ADD, SEARCH and EXIT: "
#define MSG_WRONGCMD "You only have (8) friends. Don't be an idiot too\n"
#define	MSG_EXIT "\nGoodbye. No friends forever\n"



std::string	get_command(Phonebook *MyEightFriends)
{
	std::string	Cmd;

	std::cout << MSG_DEFAULT1 << MyEightFriends->getNumFriends() << "\n";
	std::cout << MSG_DEFAULT2;
	if (std::getline(std::cin, Cmd))
		return(Cmd);
	else
	{
		std::cout << MSG_EXIT;
		exit(EXIT_SUCCESS);
	}
}



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

		}
		else if (Cmd != "EXIT")
			std::cout << MSG_WRONGCMD;
	}
	std::cout << MSG_EXIT;
	return (EXIT_SUCCESS);
}
