#include
<stdio.h
>
#include
<conio.h
>
int fakt
(int);
main()
{ printf("%d",fakt(5));
getch();
}
int fakt
(int n)
{ if (n <= 1) return 1;
else return n * fakt(n
-
1);
}
5*fakt(4) (5*24=120)
4*fakt(3) (4*6=24)
3*fakt(2) ( 3*2=6)
2*fakt(1) (2*1=2)