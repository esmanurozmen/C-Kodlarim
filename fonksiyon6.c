#include <stdio.h>
#include <conio.h>
int deger=0;int artir();
main()
{ deger=10;
printf("Deger=%d\n",deger);
printf("Deger=%d\n",artir());
getch();
}
int artir()
{ deger+=5;
return deger;}