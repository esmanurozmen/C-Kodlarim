#include<stdio.h>
#include<conio.h>
main()

{

int a[10],i,j;

for(int i=0;i<10;i++)

{ 

printf ("a[%d]=",i);

scanf("%d",&a[i]);

if (a[i]==0) break;

j=i;

}

for (i=0;i<=j;i++) 

printf ("a[%d]=%d\n",i,a[i]);

getch();

}