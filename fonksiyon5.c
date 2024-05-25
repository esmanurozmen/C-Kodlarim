#include <stdio.h>
#include <conio.h>
int ust_al(int,int);
main()
{ printf("Sonuc=%d",ust_al(2,3));
getch();
}
int ust_al(int taban,int us)
{
int sonuc = 1;
for (int i = 0; i < us; i++) sonuc *= taban;
return sonuc; }