#include<stdio.h>
#include<conio.h>

 int main()

{
	
int i;

for (i = 1; i < 5; i++)

//{     //        eğer süslü parantezi koymazsak yani blok yapmazsak ikinci printf i alt satıra geçerek yazar çünkü bu şekilde döngüye dahil değildir
       //         en son şart sağlanıp döngü bittiğinde i yi önce kullan sonra arttır dendiği için i nin dört olan değerini bir arttırıyor
       //         ama eğer süslü parantez koyarsak iki printf de döngüye dahildir ve sırayla önce birinci sonra ikinci printfi çalıştırır ve sayı beş olana kadar devam eder

printf("%d ",i);

printf("\n%d",i);


//}
getch();

}