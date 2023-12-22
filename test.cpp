#include <iostream> 

#include <ncurses/ncurses.h>

using namespace std;

int main()
{
  initscr();
  mvaddch(3,3,219);
  mvaddch(3,4,219);
  mvaddch(3,5,219);
  refresh();
  getchar();
  endwin();
}