/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 14:14:48 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 14:23:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	int	no = 42;

	int	*noPtr = &no;
	int	&noRef = no;

	std::cout << "No.: " << no << " | ptr: " << *noPtr << " | ref: " << noRef << std::endl;
	*noPtr = 21;
	std::cout << "No.: " << no << " | ptr: " << *noPtr << " | ref: " << noRef << std::endl;
	noRef = 84;
	std::cout << "No.: " << no << " | ptr: " << *noPtr << " | ref: " << noRef << std::endl;

	return (0);
}
