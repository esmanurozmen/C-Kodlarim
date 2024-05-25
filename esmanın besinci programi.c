#include <stdio.h>
#include <conio.h>
main()



{

	int a=2 , b=0 , c=2 , d=5;
	
	b+= ++a;  // bunun anlamı b nin değerini arttır b= b + (++a) yani b ye a+1 ekle demek bu da b nin yeni değerini 3 yapar ayrıca a nın değeri de başlangıçta 2 idi şimdi 3 oldu
	
  //  c+= a++; // bunun anlamı c nin değerini arttır c= c + (a++) yani c yi kullan sonra a+1 ekle bu da c nin yeni değerini 5 yapar c başlangıçta zaten 2 idi 
	
	printf(" %d %d %d %d \n", a++ , ++b , c ,d );
	
	
	printf(" %d %d %d %d \n" , a , b , c++ , d++);

	
	printf(" %d %d %d %d \n" , a , b , c , d);
	

	}