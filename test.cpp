#include <iostream> 

#include <ncurses/ncurses.h>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int inc(int a)
{
    return ++a;
}

int main()
{
  initscr();
  mvaddch(3,3,219);
  mvaddch(3,4,219);
  mvaddch(3,5,219);
  mvaddch(3,6,219);
  mvaddch(3,7,219);
  mvaddch(3,8,219);
  refresh();
  getchar();
  endwin();
}