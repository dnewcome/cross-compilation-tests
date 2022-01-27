#define PDC_WIDE
#undef PDC_FORCE_UTF8
#undef CHTYPE_32

#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
	endwin();

	return 0;
}
