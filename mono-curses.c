#include <ncurses.h>

void *console_sharp_get_stdscr ()
{
	return stdscr;
}

void *console_sharp_get_curscr ()
{
	return curscr;
}

void *console_sharp_get_newscr ()
{
	return newscr;
}

void console_sharp_get_dims (int *lines, int *cols)
{
	*lines = LINES;
	*cols = COLS;
}
