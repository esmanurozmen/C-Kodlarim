#include <stdio.h>
#include <conio.h>

int main(void)


{ 

char k='A';

float s1=123;
double s2=607.591;

printf("Karakter: %c \n", k);

printf("Sayi1: %f \n",s1);

printf("Sayi2: %f \n",s2);        /* FLOAT KULLANDIĞIMIZ İÇİN FAZLADAN ÜÇ SIFIR KOYDU ÇÜNKÜ FLOAT NOKTADAN SONRA ALTI BASAMAK YAZAR */

printf("Sayi2: %3.2f \n", s2);

printf("Sayi2: %3.1f \n", s2);    /* NOKTADAN SONRA 59 OLDUĞU İÇİN VE BİR BASAMAK İSTEDİĞİ İÇİN 6 YA YUVARLANDI */




printf("Sayi2: %3.0f \n", s2);                    /*  BU   608   */

printf("Sayi2: %0.0f \n" , s2);                  /*   BU  VE   608  */
 
printf("Sayi2: %.0f \n" , s2);                  /*   BU AYNI ŞEYİ EKRANA YAZAR Bİ FARKLARI YOKTUR 608 */




printf("Sayi2: %11.0f \n" , s2);                /*    BURADA YALNIZCA SOLDAN BOŞLUK BIRAKARAK YAZAR BİR ŞEY DEĞİŞMEZ  608 */

printf("Sayi2: %1.0f \n" , s2);                /* BURDA DA BİR ŞEY DEĞİŞMEZ SAYIYI AYNEN YAZAR 608  */

printf("Sayi2: %7.5f \n" , s2);




}