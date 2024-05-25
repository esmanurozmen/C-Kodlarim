#include<stdio.h>
#include<conio.h>
int main()

{
	
double fakt =1;
int i;

printf("Sayi=");
scanf("%d",&i);

for (int j=1; j<=i; j++)    // mesela i sayısına 5 diyelim j 1 ve i de 5 olduğundan 1 küçüktür 5 şartını sağlayarak 24. satıra iner.
                            // fakt değeri 1 olduğundan j değeride başlangıçta bir olduğundan 1 çarpı 1 sonucu 1 olur bu da fakt yeni değerini 1 yapar.
                            // daha sonra başa dönerek j++ dan program devam eder. j yi bir arttırırsak yeni değeri 2 olur 2 de küçüktür 5 olduğundan şart sağlanır ve 24. satıra iner
                            // bu durumda fakt= 1 çarpı 2 oldu çünkü fakt değeri birdi j de bir önceki satırda iki olmuştu fakt yeni değeride 2 olmuş oldu
                            // daha sonra tekrar başa döndül j nin 2 olan değerini bir arttırarak 3 yaptık ve 3 küçüktür 5 olduğundan şart sağlanarak 24. satıra iner
                            // bu durumda fakt= 2 çarpı 3 oldu ve fakt yeni değeri 6 oldu
                            // daha sonra tekrar başa döndü j nin 3 olan değerini bir arttırarak 4 yaptık ve 4 küçüktür 5 olduğundan şart sağlanarak 24. satıra iner
                            // bu durumda fakt= 6 çarpı 4 oldu ve fakt yeni değeri 24 oldu
                            // daha sonra tekrar başa döndü j nin 4 olan değerini bir arttırarak 5 yaptı ve 5 5 e eşit olduğundan şart sağlanarak 24. satıra iner
                            // bu durumda fakt= 24 çarpı 5 oldu ve fakt son değeri yani beş faktöriyel eşittir 120 olarak sonuca ulaştık.

fakt =fakt*j;

printf("Faktoryel =%7.0f",fakt);

}