#include <stdio.h>
#include <conio.h>
int a(int);
main()
{ printf("%d",a(6));getch();}
int a(int n)
{ if (n<=1) return 1;else return n + a(n - 1);
}
6+a(5) (6+15=21)
5+a(4) (5+10=15)
4+a(3) ( 4+6=10)
3+a(2) (3+3=6)
2+a(1) (2+1=3)