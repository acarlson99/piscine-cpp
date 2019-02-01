// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrInc.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:35 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PTRINC_HPP
# define PTRINC_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class PtrInc {

public:
	PtrInc( std::string );
	PtrInc( void );
	PtrInc( PtrInc const & cp);
	~PtrInc( void );
	PtrInc& operator=( PtrInc const &);

private:

};

#endif
