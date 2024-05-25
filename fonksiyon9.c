#include <stdio.h>
#include <conio.h>
int artir(int*);
main()
{ int deger=10;int *p;
p=&deger;
printf("Deger=%d\n",deger);
printf("Deger=%d\n",artir(p));
printf("Deger=%d\n",deger);
getch();
}
int artir(int *tutdeger)
{ *tutdeger+=5;
return *tutdeger;