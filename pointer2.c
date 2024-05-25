#include<stdio.h>
#include<conio.h>
main()
{
int yas;
int *p;
yas = 5;
p=&yas;
printf("%d\n",*p);
printf("%p>>%p\n", p, &yas);
*p= 3;
printf("%d", yas);
getch();
}