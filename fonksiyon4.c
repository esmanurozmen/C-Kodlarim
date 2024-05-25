#include <stdio.h>
#include <conio.h>
void yildiz_yaz(int);
main()
{ for (int i=1;i<10;i++)
yildiz_yaz(i);
getch();
}
void yildiz_yaz(int kactane)
{ for (int i = 0; i < kactane; i++) printf("*");
printf("\n");
} 