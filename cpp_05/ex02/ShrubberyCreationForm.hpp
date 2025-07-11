/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 12:19:20 by mintan            #+#    #+#             */
/*   Updated: 2025/07/11 12:49:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"

#define SCF_NAME "BREEDBUSH"
#define SCF_SIGN_GRADE 145
#define SCF_EXE_GRADE 137


class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(std::string &target);
		~ShrubberyCreationForm(void);

		/* Member Functions */
		void	execute(Bureaucrat const &executor) const;

	private:
		std::string	_target;
		void		_brushBush(void) const;

		/* Unused OCF class members - No use case since signatures should
		   not be copied */
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &inst);

};

#endif
