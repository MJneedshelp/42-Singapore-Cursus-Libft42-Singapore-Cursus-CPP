/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RefClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:44:29 by mintan            #+#    #+#             */
/*   Updated: 2025/06/14 17:02:50 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef REF_CLASS_H
# define REF_CLASS_H

#include <iostream>

class Student
{
	public:
		Student(std::string const &login): _login(login)
		{
		}
		~Student()
		{
		}
		std::string &getLoginRef()
		{
			return (this->_login);
		}
		std::string const &getLoginRefConst() const
		{
			return (this->_login);
		}
		std::string *getLoginPtr()
		{
			return (&(this->_login));
		}
		std::string const *getLoginPtrConst() const
		{
			return (&(this->_login));
		}
	private:
		std::string	_login;
};

#endif
