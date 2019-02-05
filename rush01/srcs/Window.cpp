/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 22:34:26 by amontano          #+#    #+#             */
/*   Updated: 2019/01/26 22:34:26 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Window.hpp"

Window::Window(int y2, int x2, int y1, int x1) : _ix(x1), _iy(y1), _dx(x2), _dy(y2)
{
	_w = newwin(_dy, _dx, _iy, _ix);
	_m = nullptr;
}

Window& Window::operator=( Window const &cpy) {
	if (this != &cpy)
	{
		_iy = cpy._iy;
		_dy = cpy._dy;
		_ix = cpy._ix;
		_dx = cpy._dx;
	}
	return *this;
}

int Window::getIx() { return _ix; }
int Window::getDx() { return _dx; }
int Window::getIy() { return _iy; }
int Window::getDy() { return _dy; }

WINDOW *Window::get_win() { return _w; }

int Window::move(int y, int x)
{
	return (mvwin(_w, y, x));
}

 void Window::setMod(IMonitorModule *m)
 {
	 _m = m;
 }


void	Window::updateMod( void )
{
	if (this->_m)
		this->_m->updateInfo();
}

void	Window::printMod( void )
{
	if (this->_m)
		mvwprintw(_w, _iy, _ix, "%s", _m->toString().c_str());
}