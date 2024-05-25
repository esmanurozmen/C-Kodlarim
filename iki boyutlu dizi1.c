#include<stdio.h>
#include<conio.h>
main()
{
int a[5];
int i;
for (i=0; i<=4; i++) {
printf("%d. sayiyi gir ",i+1);
scanf("%d", &a[i]);
}
printf("\n-----------------------\n");
for (i=4; i>=0; i--)
printf("%d . sirada girilen sayi = %d\n", i+1, a[i]);
getch();
}