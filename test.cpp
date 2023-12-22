#include <iostream> 
#include <conio.h> 

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
  cout << inc(2);
  getch();
}