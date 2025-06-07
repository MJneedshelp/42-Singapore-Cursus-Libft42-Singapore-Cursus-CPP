/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:44:08 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 12:53:18 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WORKING_CLASS_H
# define WORKING_CLASS_H

class Poor
{
	public:

		char		name;
		int			money;
		float		height;
		int	const	age;

		void	fx_intro(void) const;


		Poor(char p1, int p2, int const p3);
		~Poor(void);
};

#endif
