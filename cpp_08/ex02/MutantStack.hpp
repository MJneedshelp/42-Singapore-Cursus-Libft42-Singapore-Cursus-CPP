/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:48:18 by mintan            #+#    #+#             */
/*   Updated: 2025/08/27 02:15:57 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <deque>
#include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		/* OCF */
		MutantStack();
		MutantStack(MutantStack const &src);
		~MutantStack();
		MutantStack<T>&	operator=(MutantStack const &src);

		/* Type definitions - Alias */
		typedef	typename std::stack<T>::container_type::iterator		iterator;
		typedef	typename std::stack<T>::container_type::const_iterator	const_iterator;

		/* Member functions - uses the container's iterators */
		iterator		begin();
		iterator		end();
		const_iterator	cbegin()	const;
		const_iterator	cend()		const;
};

#include "MutantStack.tpp"
#endif
