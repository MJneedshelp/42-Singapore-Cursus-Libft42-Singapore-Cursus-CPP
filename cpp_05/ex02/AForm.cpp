/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:20:47 by mintan            #+#    #+#             */
/*   Updated: 2025/07/11 12:05:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Constructors and Destructors */
AForm::AForm(std::string name, int gradeSign, int gradeExe):
	_name(name), _signed(false), _gradeSign(gradeSign), _gradeExe(gradeExe)
{
	_checkGrade(gradeSign);
	_checkGrade(gradeExe);
	return;
}

AForm::AForm(AForm const &src):
	_name(src.getName()), _signed(src.getSigned()),
	_gradeSign(src.getGradeSign()), _gradeExe(src.getGradeExe())
{
	_checkGrade(this->_gradeSign);
	_checkGrade(this->_gradeExe);
	return;
}

AForm::~AForm(void)
{
	std::cout << "Drowning in forms!!" << std::endl;
}

/* Getter and Setters */
std::string	AForm::getName(void) const
{
	return(this->_name);
}

bool	AForm::getSigned(void) const
{
	return(this->_signed);
}

int	AForm::getGradeSign(void) const
{
	return(this->_gradeSign);
}

int	AForm::getGradeExe(void) const
{
	return(this->_gradeExe);
}

void	AForm::beSigned(Bureaucrat const &drone)
{
	if (drone.getGrade() > this->getGradeSign())
		throw (AForm::GradeTooLowException());
	if (this->_signed)
		std::cout << "Multiple signatures? I love red tap!" << std::endl;
	else
		this->_signed = true;
}

/* Exceptions */
const char*	AForm::GradeTooHighException::what() const throw()
{
	return("Grade cannot be higher than 1");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return("[Construction]: Grade cannot be lower than 150 | [Signing]: Bureaucrat's level is too low to sign");
}

void	AForm::_checkGrade(int grade) const
{
	if (grade < MAX_GRADE)
		throw(GradeTooHighException());
	if (grade > MIN_GRADE)
		throw(GradeTooLowException());
}

/* Operator overload << */
std::ostream& operator<<(std::ostream &o, AForm const &inst)
{
	o << std::boolalpha << "AForm: " << inst.getName() << " | Signed?: " << \
	inst.getSigned() << " | Grade to Sign:  " << inst.getGradeSign() << \
	" | Grade to Execute: " << inst.getGradeExe();
	return (o);
}
