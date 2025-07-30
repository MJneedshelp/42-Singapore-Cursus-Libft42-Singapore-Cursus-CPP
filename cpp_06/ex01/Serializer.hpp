/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 22:40:42 by mintan            #+#    #+#             */
/*   Updated: 2025/07/30 21:50:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include "Data.hpp"
#include <stdint.h>

class Serializer
{
	public:
		/* Static method */
		static	uintptr_t	serialize(Data *ptr);
		static	Data*		deserialize(uintptr_t raw);

	private:
		Serializer(void);
		Serializer(const Serializer &src);
		~Serializer(void);
		Serializer&	operator=(const Serializer &rhs);

};
#endif
