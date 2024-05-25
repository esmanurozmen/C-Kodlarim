#include<stdio.h>
#include<conio.h>


main()

{ 

int sayi=0;

printf("Sayı Girin=");
scanf("%d",&sayi);

if (sayi>0) printf("Pozitif");  // pozitif bir sayı girersek diğer iki else yi görmez direrkt ekrana pozitif yazar

else if (sayi<0) printf("Negatif");    // negatif bir sayı girersek ekrana direkt negatif yazar 

 printf ("Sıfır");         // eğer buradaki else yi silersem ve pozitif bir sayı girersem ekrana hem pozitif hem de sıfır yazacak
                              // eğer else koyarsak yalnızca ilk iki değr sağlanmadığında ekranda sıfır yazacak

getch();

}