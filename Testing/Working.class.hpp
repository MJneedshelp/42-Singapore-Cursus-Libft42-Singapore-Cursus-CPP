/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Working.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 23:44:08 by mintan            #+#    #+#             */
/*   Updated: 2025/06/07 14:19:44 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WORKING_CLASS_H
# define WORKING_CLASS_H

class Poor
{
	public:

		char			name;
		int				money;
		float			height;
		int	const		age;

		void			fx_intro(void) const;
		int				getSelfesteem(void) const;
		void			setSelfesteem(int se);
		int				compareSelfesteem(Poor *other) const;
		static	int		getInstances(void);


		Poor(char p1, int p2, int const p3);
		~Poor(void);

	private:

		int			_selfesteem;
		void		_security(void) const;
		static	int	_nbInstances;
};

#endif
