//Hier eine Summenfunktion in C//

#include<stdio.h>

#include "curses.h"

int main()

  {
    initscr();
    addstr("hit a key:");
    getch();
    return endwin();
  }

void main()
{

 int a, b, sum;


 clrscr();

 printf("Hallo Benutzer, bitte gib zwei Zahlen für a und b ein\n");

 scanf("%d %d",&a &b);

 sum = a + b;

 printf("Die Summe ist %d",sum);

 getch();














}
