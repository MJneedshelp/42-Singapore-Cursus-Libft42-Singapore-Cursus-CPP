/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 00:54:00 by mintan            #+#    #+#             */
/*   Updated: 2025/08/07 18:13:59 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T, typename F>
void	iter(T *array, unsigned int  arrLen, F fx)
{
	for (unsigned int i = 0; i < arrLen; ++i)
		fx(array[i]);
}

template<typename T, typename F>
void	iter(T const *array, unsigned int arrLen, F fx)
{
	for (unsigned int i = 0; i < arrLen; ++i)
		fx(array[i]);
}

template<typename T>
void	printT(T const &thing)
{
	std::cout << thing << std::endl;
}

template<typename T>
void	doubleT(T &thing)
{
	thing = thing * 2;
}
