#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	float Lado1, Lado2, Lado3;
	
	printf ("\n Digite um lado do tri�ngulo: ");
	scanf ("%f", &Lado1);
	
	printf ("\n");
	
	printf ("\n Digite outro lado do tri�ngulo: ");
	scanf ("%f", &Lado2);
	
	printf ("\n");
	
	printf ("\n Digite o �ltimo lado do tri�ngulo: ");
	scanf ("%f", &Lado3);
	
	printf("\n");
	
	if (Lado1 == Lado2 == Lado3)
	{
		printf("\n O tri�ngulo � equil�tero \n");		
    }
		
    if (Lado1 != Lado2 != Lado3)
	{
		printf ("\n O tri�ngulo � escaleno \n");		
    }
					
	if ((Lado1 != Lado2 == Lado3) && (Lado1 != Lado3 == Lado2))
	{
		
		if ((Lado2 != Lado1 == Lado3) && (Lado2 != Lado3 == Lado1))
		{
			
			if ((Lado3 != Lado1 == Lado2) && (Lado3 != Lado2 == Lado1))
			{	
				printf("\n O tri�ngulo � equil�tero \n");	
			}				
			
		}						
	}
		
system ("pause");	
return 0;	
}
