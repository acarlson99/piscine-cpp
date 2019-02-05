/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 22:34:20 by amontano          #+#    #+#             */
/*   Updated: 2019/01/26 22:34:22 by amontano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <curses.h>
#include "IMonitorModule.hpp"

class Window
{
  public:
    Window(void) {}
    Window(int, int, int, int);
    ~Window(void) {}

    Window& operator=( Window const &);
    int getIx();
    int getDx();
    int getIy();
    int getDy();
    int move(int, int);
    void setMod(IMonitorModule *m);
    void  updateMod( void );
    void  printMod( void );
    WINDOW *get_win();

  private:
    int _ix;
    int _iy;
    int _dx;
    int _dy;
    WINDOW *_w;
    IMonitorModule *_m;
};

#endif
