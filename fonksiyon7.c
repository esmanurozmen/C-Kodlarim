#include <stdio.h>
#include <conio.h>
int artir(int);
main()
{ int deger=10;
printf("Deger=%d\n",deger);
printf("Deger=%d\n",artir(deger));
printf("Deger=%d\n",deger);
getch();
}
int artir(int tutdeger)
{ tutdeger+=5;
return tutdeger;
}
