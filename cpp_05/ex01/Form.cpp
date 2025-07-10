/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:20:47 by mintan            #+#    #+#             */
/*   Updated: 2025/07/11 01:21:54 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors and Destructors */
Form::Form(std::string name, int gradeSign, int gradeExe):
	_name(name), _signed(false), _gradeSign(gradeSign), _gradeExe(gradeExe)
{
	_checkGrade(gradeSign);
	_checkGrade(gradeExe);
	return;
}

Form::Form(Form const &src):
	_name(src.getName()), _signed(src.getSigned()),
	_gradeSign(src.getGradeSign()), _gradeExe(src.getGradeExe())
{
	_checkGrade(this->_gradeSign);
	_checkGrade(this->_gradeExe);
	return;
}

Form::~Form(void)
{
	std::cout << "Drowning in forms!!" << std::endl;
}

/* Getter and Setters */
std::string	Form::getName(void) const
{
	return(this->_name);
}

bool	Form::getSigned(void) const
{
	return(this->_signed);
}

int	Form::getGradeSign(void) const
{
	return(this->_gradeSign);
}

int	Form::getGradeExe(void) const
{
	return(this->_gradeExe);
}

void	Form::beSigned(Bureaucrat const &drone)
{
	if (drone.getGrade() > this->getGradeSign())
		throw (Form::GradeTooLowException());
	if (this->_signed)
		std::cout << "Multiple signatures? I love red tap!" << std::endl;
	else
		this->_signed = true;
}

/* Exceptions */
const char*	Form::GradeTooHighException::what() const throw()
{
	return("Grade cannot be higher than 1");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return("[Construction]: Grade cannot be lower than 150 | [Signing]: Bureaucrat's level is too low to sign");
}

void	Form::_checkGrade(int grade) const
{
	if (grade < MAX_GRADE)
		throw(GradeTooHighException());
	if (grade > MIN_GRADE)
		throw(GradeTooLowException());
}

/* Operator overload << */
std::ostream& operator<<(std::ostream &o, Form const &inst)
{
	o << std::boolalpha << "Form: " << inst.getName() << " | Signed?: " << \
	inst.getSigned() << " | Grade to Sign:  " << inst.getGradeSign() << \
	" | Grade to Execute: " << inst.getGradeExe();
	return (o);
}
