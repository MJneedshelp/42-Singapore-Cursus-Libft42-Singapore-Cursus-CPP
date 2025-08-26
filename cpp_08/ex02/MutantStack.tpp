/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:54:29 by mintan            #+#    #+#             */
/*   Updated: 2025/08/27 02:19:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/* OCF */
template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	return;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src): std::stack<T>(src)
{
	return;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	return;
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack const &src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin()	const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend()	const
{
	return (this->c.end());
}

