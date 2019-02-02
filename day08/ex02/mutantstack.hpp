// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/02/01 15:28:49 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 17:44:23 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template<typename T>
class MutantStack: public std::stack<T> {

public:
	MutantStack( void ) : _size(0) { };
	MutantStack( MutantStack const & cp) { *this = cp; };
	~MutantStack( void ) { };
	MutantStack& operator=( MutantStack const &cp) { this->_stack = cp._stack; this->_size = cp._size; };

	typedef typename std::list<T>::iterator iterator;

	void			push(T n)
		{
			++_size;
			this->_stack.push_front(n);
		}

	void			pop( void )
		{
			if (!_size)
				return ;
			--_size;
			return (this->_stack.pop_front());
		}

	T				top( void )
		{
			return (this->_stack.front());
		}

	T				bottom( void )
		{
			return (this->_stack.back());
		}

	iterator		begin( void )
		{
			return (_stack.begin());
		}

	iterator		end( void )
		{
			return (_stack.end());
		}

	unsigned long	size( void )
		{
			return (this->_size);
		}

private:
	std::list<T>	_stack;
	unsigned long	_size;

};

#endif
