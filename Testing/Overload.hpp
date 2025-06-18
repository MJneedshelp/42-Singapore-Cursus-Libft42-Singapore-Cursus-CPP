/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Overload.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:41:24 by mintan            #+#    #+#             */
/*   Updated: 2025/06/18 13:58:08 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OVERLOAD_CLASS_H
# define OVERLOAD_CLASS_H

#include <string>
#include <iostream>

class Overload
{
	public:
		Overload(void);
		~Overload(void);

		void	fx(char const c) const;
		void	fx(int const i) const;
		void	fx(double const d) const;
		void	fx(Overload const &o) const;
};

#endif
