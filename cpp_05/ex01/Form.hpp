/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:12:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/10 17:23:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

#define FORM_NAME "17B"

class	Form
{
	public:
		Form(int gradeSign, int gradeExe);
		Form(Form const &src);
		~Form(void);
		Form&	operator=(Form const &src);

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

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExe;
		void				_checkGrade(int grade) const;

};

#endif

std::ostream& operator<<(std::ostream&, Form const &inst);
