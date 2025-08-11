/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 19:34:23 by mintan            #+#    #+#             */
/*   Updated: 2025/08/12 03:14:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Default Constructor */
template<typename T>
Array<T>::Array(void): _arrSz(0)
{
	std::cout << "Default constructor" << std::endl;
	this->_array = NULL;
}

/* Parametric Constructor */
template<typename T>
Array<T>::Array(unsigned int n): _arrSz(n)
{
	std::cout << "Parametric constructor" << std::endl;
	this->_array = new T[n]();
}

/* Copy Constructor */
template<typename T>
Array<T>::Array(Array const &src): _arrSz(src.size())
{
	std::cout << "Copy constructor" << std::endl;
	this->_array = new T[(src.size())];
	*this = src;
}

/* Assignment Operator Constructor */
template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const &src)
{
	if (this != &src)
	{
		if (this->_arrSz != src.size())
		{
			this->_arrSz = src.size();
			delete [](this->_array);
			this->_array = new T[src.size()]();
		}
		for (unsigned int i = 0; i < this->_arrSz; ++i)
			(*this)[i] = src[i];
	}
	return (*this);
}

/* Default Destructor */
template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Default destructor" << std::endl;
	delete [](this->_array);
}

/* [] Operator */
template<typename T>
T const&	Array<T>::operator[](unsigned int idx)	const
{
	if (idx >= this->size())
		throw (std::exception());
	return (this->_array[idx]);
}

template<typename T>
T&	Array<T>::operator[](unsigned int idx)
{
	if (idx >= this->size())
		throw (std::exception());
	return (this->_array[idx]);
}

/* Getters */
template<typename T>
unsigned int	Array<T>::size(void)	const
{
	return (this->_arrSz);
}

template<typename T>
std::string	Array<T>::getType(void)	const
{
	return (typeid(T).name());
}

/* << Operator */
template<typename T>
std::ostream&	operator<<(std::ostream &o, Array<T> const &inst)
{
	o << "==== Array Type: " << inst.getType() << " | Size: " << inst.size() << " ====" << std::endl;
	o << "==== Contents ====" << std::endl;
	for (unsigned int i = 0; i < inst.size(); ++i)
	{
		o << "index: " << i << " | content: " << inst[i] << std::endl;
	}
	return (o);
}
