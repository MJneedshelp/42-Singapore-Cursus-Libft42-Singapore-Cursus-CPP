/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pair.class.tpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 00:18:04 by mintan            #+#    #+#             */
/*   Updated: 2025/08/06 01:47:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

/* Generic Template */
template<typename T, typename U>
class	Pair
{
	public:
		Pair<T, U>(T const &lhs, U const &rhs): _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Generic template" << std::endl;
			return;
		}
		~Pair<T, U>(void){}

		T const	&getLhs(void)	const{return(this->_lhs);}
		U const	&getRhs(void)	const{return(this->_rhs);}

	private:
		Pair<T, U>(void);
		// T const	&	_lhs;
		// U const	&	_rhs;
		T	_lhs;
		U	_rhs;
};

/* Partially Specialised Template */
template<typename U>
class	Pair<int, U>
{
	public:
		Pair<int, U>(int const &lhs, U const &rhs): _lhs(lhs), _rhs(rhs)
		{
			std::cout << "Int partial specialisation template" << std::endl;
			return;
		}
		~Pair<int, U>(void){}

		int const	&getLhs(void)	const{return(this->_lhs);}
		U 	const	&getRhs(void)	const{return(this->_rhs);}

	private:
		Pair<int, U>(void);
/*
You are storing references (const &) to the constructor parameters lhs and rhs.
These references become dangling references once the constructor finishes execution because:
- The constructor parameters lhs and rhs are local variables.
- After the constructor returns, these local variables are destroyed.
- Your member variables _lhs and _rhs now reference destroyed objects → undefined behavior.
*/
		// int const	&	_lhs;
		// U 	const	&	_rhs;
		int	_lhs;
		U	_rhs;
};

/* Fully Specialised Template */
template<>
class	Pair<bool, bool>
{
	public:
		Pair<bool, bool>(bool lhs, bool rhs)
		{
			std::cout << "Bool/bool specialisation template" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0;
			this->_n |= static_cast<int>(rhs) << 1;
			return;
		}
		~Pair<bool, bool>(void){}

		bool	getLhs(void)	const{return(this->_n & 0x01);}
		bool	getRhs(void)	const{return(this->_n & 0x02);}

	private:
		Pair<bool, bool>(void);
		int	_n;
};


/* Operator Overload for template */
template<typename T, typename U>
std::ostream &operator<<(std::ostream &o, Pair<T, U> const	&inst)
{
	o << "Pair(" << inst.getLhs() << ", " << inst.getRhs() << ")";
	return (o);
}

std::ostream &operator<<(std::ostream &o, Pair<bool, bool> const	&inst)
{
	o << std::boolalpha << "Pair(" << inst.getLhs() << ", " << inst.getRhs() << ")";
	return (o);
}
