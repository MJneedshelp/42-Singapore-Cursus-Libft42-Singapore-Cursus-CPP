/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 15:31:42 by mintan            #+#    #+#             */
/*   Updated: 2025/06/10 13:22:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>


#define DEFAULT_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"

/* Description: Takes in a string and prints it out in uppercase.
   static_cast is used for robustness
*/
void	print_upper(char *str)
{
	char	c;

	for(int i = 0; str[i] != '\0'; i++)
	{
		c = std::toupper(static_cast<unsigned char>(str[i]));
		std::cout << c;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
			print_upper(argv[i]);
		std::cout << "\n";
	}
	else
		std::cout << DEFAULT_MSG;
	return (0);
}
