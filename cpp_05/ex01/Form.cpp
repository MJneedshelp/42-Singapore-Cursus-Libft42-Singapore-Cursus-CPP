/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:20:47 by mintan            #+#    #+#             */
/*   Updated: 2025/07/10 17:23:49 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors and Destructors */
Form::Form(int gradeSign, int gradeExe): _name(BUREAU_NAME), _grade(grade)
{
	_checkGrade(grade);
	return;
}

Form::Form(Form const &src): _name(BUREAU_NAME)
{
	*this = src;
	_checkGrade(this->_grade);
	return;
}

Form::~Form(void)
{
	std::cout << "Death by a thousand paper cuts" << std::endl;
}

Form&	Form::operator=(Form const &src)
{
	if (this != &src)
	{
		this->_grade = src.getGrade();
	}
	return(*this);
}

