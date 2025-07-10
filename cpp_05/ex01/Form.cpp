/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:20:47 by mintan            #+#    #+#             */
/*   Updated: 2025/07/10 18:36:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors and Destructors */
Form::Form(std::string name, int gradeSign, int gradeExe):
	_name(name), _gradeSign(gradeSign), _gradeExe(gradeExe)
{
	_checkGrade(gradeSign);
	_checkGrade(gradeExe);
	return;
}

Form::Form(Form const &src): _name(src.getName())
{
	*this = src;
	_checkGrade(this->_grade);
	return;
}

Form::~Form(void)
{
	std::cout << "Drownng in forms!!" << std::endl;
}



















/* Exceptions */
const char*	Form::GradeTooHighException::what() const throw()
{
	return("Grade cannot be higher than 1");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return("Grade cannot be lower than 150");
}

void	Form::_checkGrade(int grade) const
{
	if (grade < MAX_GRADE)
		throw(GradeTooHighException());
	if (grade > MIN_GRADE)
		throw(GradeTooLowException());
}
