// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/02/01 15:28:49 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 16:56:10 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template<typename T>
class MutantStack<T>: public std::stack<T> {

public:
	MutantStack( void );
	MutantStack( MutantStack const & cp);
	~MutantStack( void );
	MutantStack& operator=( MutantStack const &);

	void				push(T n)
		{
			this->_stack.push_back(n);
		}

	void				pop( void )
		{
			return (this->_stack.pop_front());
		}

	// std::iterator<T>		begin( void )
	// 	{
	// 		return (_stack.begin());
	// 	}

	// std::iterator<T>		end( void )
	// 	{
	// 		return (_stack.end());
	// 	}

private:
	std::list<T>	_stack;

};

#endif
