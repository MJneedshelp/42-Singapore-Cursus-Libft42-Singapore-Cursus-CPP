/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/15 16:24:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM

#include "AForm.hpp"
#include <fstream>
#include <string>

#define PPF_NAME "Cronyism101"
#define PPF_SIGN_GRADE 25
#define PPF_EXE_GRADE 5

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm(void);

		/* Member Functions */
		void	execute(Bureaucrat const &executor) const;

	private:
		std::string	_target;
		void		_presidentialPardon(void) const;

		/* Unused OCF class members - No use case since signatures should
		   not be copied */
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &inst);
};

#endif
