// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrDec.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:35 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PTRDEC_HPP
# define PTRDEC_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class PtrDec {

public:
	PtrDec( std::string );
	PtrDec( void );
	PtrDec( PtrDec const & cp);
	~PtrDec( void );
	PtrDec& operator=( PtrDec const &);

private:

};

#endif
