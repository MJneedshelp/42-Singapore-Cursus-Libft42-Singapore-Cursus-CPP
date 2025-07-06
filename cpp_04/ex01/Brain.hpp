/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:35:30 by mintan            #+#    #+#             */
/*   Updated: 2025/07/06 18:01:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

#define	NO_IDEAS 100

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);
		Brain&		operator=(Brain const &src);
		void		setIdea(int idx, std::string thought);
		std::string	getIdea(int idx) const;

	private:
		std::string	ideas[NO_IDEAS];
};

#endif
