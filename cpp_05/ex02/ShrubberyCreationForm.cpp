/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:32 by mintan            #+#    #+#             */
/*   Updated: 2025/07/11 12:50:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target):
	AForm(SCF_NAME, SCF_SIGN_GRADE, SCF_EXE_GRADE),	_target(target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Burn those bushes!" << std::endl;
}






/* Description: function to create */
