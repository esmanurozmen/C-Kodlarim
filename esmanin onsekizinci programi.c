#include<stdio.h>
#include<conio.h>
main()
{ double fakt =1;int sayi;int adet,k=0,i=1;

printf("Kac adet faktoryel degeri hesaplanacak:");

scanf("%d",&adet);

while(k<adet)

{

 printf("\n%d.Sayiyi Girin=",k+1);

scanf("%d",&sayi);
fakt=1; i=1;

while(i<=sayi)
fakt*=i++;

printf("Faktoryel =%7.0f\n",fakt);

k++;


}
getch();
}
