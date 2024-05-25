#include<stdio.h>
#include<conio.h>
main()

{
	
int s1,s2,s3,ek;

printf("s1=");scanf("%d", &s1);
printf("s2=");scanf("%d", &s2);
printf("s3=");scanf("%d", &s3);

ek = s1;  // öylesine sayı bire eşitledik sayı ikiye veya üçe de eşitleyebilirdik amacımız karşılaştırıp en küçük olanı bulmak

if (ek>s2) ek=s2;   // ek değeri artık sayı bire eşittir ve girilen bir değeri sayı ikiden büyükse ek değerine artık sayı ikiyi atıyoruz yani ek değeri sayı ikiye eşit oluyor
if (ek>s3) ek=s3;   // ek değeri yani sayı bir sayı üçten büyükse ek değerine artık sayı üçü atıyoruz yani ek artık sayı üçe eşit oluyor
                    // eğer ek değeri sayı iki ve üçten büyük değilse direkt ekrana eke atadığımız bir değeri ekrana yazılır

printf("En kucuk olani = %d", ek);

}
