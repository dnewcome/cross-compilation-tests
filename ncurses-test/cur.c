#include <ncurses.h>

void init() {
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
}

int main() {
    int ch;
    init();

    printw("Type any character to see it\n");

    while(ch != KEY_F(2)) {
        ch = getch();
		printw("%c", ch);
        refresh();
    }

	endwin();
	return 0;
}
