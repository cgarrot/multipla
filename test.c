/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:35:49 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 03:15:41 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <curses.h>
#include "multipla.h"

//static char *m_up[ + 1] = {D01, D02, D03, D04, D05, D06, D07, D08}

//static char *r1[ + 1] = {R09, R10, R11, R12, R13}

//static char *r2[ + 1] = {RR09, RR10, RR11, RR12, RR13}

int main(void)
{
	initscr();
	raw();
	int derp = 4;
	printw("salut", derp);
	addch('a');
	move(12, 13);
	mvprintw(15, 25, "Move");
	//mvaddch(12, 50, RR09);
	mvaddch(12, 50, "1");
	getch();
	endwin();

	return (0);
}
