/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:19:56 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 12:21:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructors and Destructors */
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	_checkGrade(grade);
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src.getName())
{
	*this = src;
	_checkGrade(this->_grade);
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Death by a thousand paper cuts" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
	{
		this->_grade = src.getGrade();
	}
	return(*this);
}

/* Getter and Setters */
std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

void	Bureaucrat::promote(void)
{
	int	postGrade;

	postGrade = this->_grade - 1;
	_checkGrade(postGrade);
	this->_grade--;
}

void	Bureaucrat::demote(void)
{
	int	postGrade;

	postGrade = this->_grade + 1;
	_checkGrade(postGrade);
	this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade cannot be higher than 1");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade cannot be lower than 150");
}

void	Bureaucrat::_checkGrade(int grade) const
{
	if (grade < MAX_GRADE)
		throw(GradeTooHighException());
	if (grade > MIN_GRADE)
		throw(GradeTooLowException());
}

/* Operator overload << */
std::ostream& operator<<(std::ostream &o, Bureaucrat const &inst)
{
	o << inst.getName() << ", bureaucrat grade " << inst.getGrade() << ".";
	return (o);
}
