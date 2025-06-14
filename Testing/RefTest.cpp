/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RefTest.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:53:05 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 17:06:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RefClass.hpp"

int	main(void)
{
	Student	s1 = Student("student 1");
	Student	s2 = Student("student 2");

	std::cout << s1.getLoginRefConst() << " | " << s2.getLoginRefConst() << std::endl;
	std::cout << *(s1.getLoginPtrConst()) << " | " << *(s2.getLoginPtrConst()) << std::endl;

	s1.getLoginRef() = "Yabadabadoo";
	std::cout << *(s1.getLoginPtrConst()) << " | " << *(s2.getLoginPtrConst()) << std::endl;

	*(s2.getLoginPtr()) = "Howzeezopzop";
	std::cout << *(s1.getLoginPtrConst()) << " | " << *(s2.getLoginPtrConst()) << std::endl;


	return (0);
}
