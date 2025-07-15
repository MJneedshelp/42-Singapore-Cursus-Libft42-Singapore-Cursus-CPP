/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:12:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 16:23:07 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class	AForm
{
	public:
		AForm(std::string name, int gradeSign, int gradeExe);
		AForm(AForm const &src);
		virtual	~AForm(void);

		/* Getters and setters */
		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeSign(void) const;
		int			getGradeExe(void) const;
		void		beSigned(Bureaucrat const &drone);

		/* Exceptions */
		class	GradeTooHighException: public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class	GradeExeException: public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class	SignExeException: public std::exception
		{
			public:
				const char*	what() const throw();
		};

		/* Member Functions */
		virtual	void	execute(Bureaucrat const &executor) const = 0;

	protected:
		void	checkExeGrade(Bureaucrat const &executor) const;
		void	checkExeSign(void) const;


	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExe;
		void				_checkGrade(int grade) const;

		/* Unused OCF class members*/
		AForm(void);
		/* Operator= is set as private to follow OCF. Not used as all members are const */
		AForm&	operator=(AForm const &inst);
};

#endif

std::ostream& operator<<(std::ostream&, AForm const &inst);
