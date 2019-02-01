// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 14:18:04 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 15:16:04 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MYCLASS_HPP
# define MYCLASS_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>

class Span {

public:
	Span( unsigned int ) throw(Span::BadSizeException);
	Span( Span const & cp);
	~Span( void );
	Span& operator=( Span const &);

	class BadSizeException : public std::exception {
	public:
		BadSizeException( void );
		BadSizeException( BadSizeException const & cp);
		~BadSizeException( void ) throw();
		BadSizeException& operator=( BadSizeException const & e);
		virtual const char* what() const throw();
	};

	void		addNumber( int ) throw(Span::BadSizeException);
	void		addNumber( int a, int b ) throw(Span::BadSizeException);

	int			shortestSpan( void ) throw(Span::BadSizeException);
	int			longestSpan( void ) throw(Span::BadSizeException);

private:
	unsigned int			_size;
	std::vector<int>		_nums;

};

#endif
