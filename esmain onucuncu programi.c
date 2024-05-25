#include<stdio.h>
#include<conio.h>
main()

{
	
char c;

c = getch();

if ((c>='0') && (c<='9')) printf("Rakam girdiniz.");

else printf("Rakam disi %c karakterini girdiniz.",c);

getch();

}