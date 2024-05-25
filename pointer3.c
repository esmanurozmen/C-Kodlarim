#include <stdio.h>
int main(void) {
	
	char  *yaz= "ahmet yesevi";
	       
		   //char yaz[20]="ahmet yesevi"; 
   int i=2;
   while(--i<3)
   
   { printf ("%s \n", yaz);
      i+=1;
      
    if (i--<=-2) break;
   }
}