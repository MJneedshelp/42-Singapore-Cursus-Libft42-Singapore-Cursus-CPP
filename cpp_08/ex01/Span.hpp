/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:59:11 by mintan            #+#    #+#             */
/*   Updated: 2025/08/21 17:56:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H 

#define MAX_SIZE 10


class Span:
{
    public: //inherit from a container of choice
        Span(unsigned int Num);
        ~Span();

        void    addNumber(unsigned int num);    //check if the max number is reached


    private:
        Span();                                             //private
        int             _max;                               //initialise as -1 so we know that. Store when using add number
        int             _min;                               //initialise as -1 so we know that. Store when using add number
        unsigned int    _fill;                              //initialise as 0, used to track which spaces are filled. Increment with add number / add range
};


#endif

