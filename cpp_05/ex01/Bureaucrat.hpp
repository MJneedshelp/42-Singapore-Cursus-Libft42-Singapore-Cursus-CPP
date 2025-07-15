/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:12:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 16:17:16 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

#define MAX_GRADE 1
#define MIN_GRADE 150

/* Forward declaration */
class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		Bureaucrat&	operator=(Bureaucrat const &src);

		/* Getters and setters */
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		promote(void);
		void		demote(void);

		/* Member function */
		void		signForm(Form &form) const;

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
		int					_grade;
		void				_checkGrade(int grade) const;
		/* Unused OCF class members - Bureacrats to always have a name and grade */
		Bureaucrat(void);
};

#endif

std::ostream& operator<<(std::ostream&, Bureaucrat const &inst);
