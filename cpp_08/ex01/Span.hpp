/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:59:11 by mintan            #+#    #+#             */
/*   Updated: 2025/08/24 10:41:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

#include <list>
#include <algorithm>
#include <iostream>
#include <exception>

#define ERR_TOOSMALL	"A size of 0 is like a nothing burger. Do better"

class Span
{
    public:
        Span(unsigned int maxSize);
        ~Span();

        void    addNumber(unsigned int num);				//check if the max number is reached
		//Add an exception here later for the case where the number assigned is to small


	private:
		Span();												//private
		Span(Span const &src);								//Copy constructor
		Span&			operator=(Span const &src);			//Copy assignment operator

		std::list<int>	_intList;
		unsigned int	_maxSize;
		int				_max;								//initialise as -1 so we know that. Store when using add number
		int				_min;                               //initialise as -1 so we know that. Store when using add number
		unsigned int	_fill;                              //initialise as 0, used to track which spaces are filled. Increment with add number / add range
};


#endif

