#include <stdio.h>
#include <ncurses.h>
int main(void)
{
	char ch, ch1;
	initscr();
	while(true) {
		printw("Input a character:");
		ch = getch();
		printw("\nYou input a '%c'\n", ch);
	}
	endwin();
	return 0;
}
