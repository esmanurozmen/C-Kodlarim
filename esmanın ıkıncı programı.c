#include <stdio.h>
#include <conio.h>
main (void)

{
	int final; 
	int vize;
	double not;
	
	printf ("vize notunuzu giriniz:");
	scanf ("%d" , &vize );
	
	printf ("final notunuzu giriniz:");
	scanf ("%d" , &final);
	
	not = (vize * 0.4) + (final * 0.6);
	
	printf ("yil sonu notu = %f \n" , not);
	
	if (not > 90) 
	{ 
	printf (" AA ile dersi gectiniz.");
	}
	
	else if (not > 85 )
	{
		printf ("BA ile dersi gectiniz.");
	}
	
	else if ( not > 80)
	{
		printf ("BB ile dersi gectiniz.");
	}
	
	else if ( not > 75)
	{
		printf ("CB ile dersi gectiniz.");
	}
	
	else if ( not > 50)
	{
		printf ("Dersi kosullu gectiniz.");
	}
	
	else 
	{ 
	printf ("Dersten kaldınız.");
	}
	
	
}