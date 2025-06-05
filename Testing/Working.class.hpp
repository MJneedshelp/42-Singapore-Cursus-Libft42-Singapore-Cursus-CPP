/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:44:08 by mintan            #+#    #+#             */
/*   Updated: 2025/06/05 14:19:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WORKING_CLASS_H
# define WORKING_CLASS_H

class Poor
{
	public:

		char	name;
		int		money;
		float	height;

		void	fx_job(void);
		void	fx_intro(void);


		Poor(char p1, int p2, float p3);
		~Poor(void);
};

#endif
