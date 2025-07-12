/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:32 by mintan            #+#    #+#             */
/*   Updated: 2025/07/12 17:27:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	AForm(SCF_NAME, SCF_SIGN_GRADE, SCF_EXE_GRADE),	_target(target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Burn those bushes!" << std::endl;
}

/* Description: function to create a file with trees inside */
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkExeSign();
	this->checkExeGrade(executor);
	this->_transplantTree();
}

/* Helper functions */
void	ShrubberyCreationForm::_brushBush(std::ofstream &file)
{
	file << "    ,*-.    " << std::endl;
	file << "    |  |    " << std::endl;
	file << ",.  |  |    " << std::endl;
	file << "| |_|  | ,. " << std::endl;
	file << "`---.  |_| |" << std::endl;
	file << "    |  .--` " << std::endl;
	file << "    |  |    " << std::endl;
	file << "    |  |    " << std::endl;
}

void	ShrubberyCreationForm::_transplantTree(void) const
{
	std::string		fileName = this->_target + "_shrubbery";
	std::ofstream	file(fileName.c_str());

	this->_brushBush(file);
	file.close();
}
