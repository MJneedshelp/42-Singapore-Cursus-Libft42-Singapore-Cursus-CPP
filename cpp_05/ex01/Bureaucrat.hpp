/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 21:12:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/10 17:26:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <stdexcept>

#define MAX_GRADE 1
#define MIN_GRADE 150

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

};

#endif

std::ostream& operator<<(std::ostream&, Bureaucrat const &inst);
