#include <stdio.h>
#include <stdlib.h>

int main()
{
	float GR,PR,montante,resultado,TR,repet,repet2 ;
	char nome[61];
	
	printf (">>> Digite o nome do usuário: ");
	scanf ("%s",nome);
	do{
	printf (">>> Digite o valor do ganho: ");
	scanf ("%f", &GR);
	printf (">>> Digite o valor do gasto: ");
	scanf ("%f", &PR);
	do{
	printf (">>> Digite o mês: ");
	scanf ("%f",&TR);
	
	montante = GR - PR ;
	resultado = montante * TR ;
	printf ("%.0f", resultado);
	
    printf ("\n>>> Digite (0) para recalcular \nos valores igual ao mês anterior \nou 5 para variar : ");
	scanf ("%f", &repet);
	   }
	   
	while (repet == 0);
	
	printf (">>> Digite (1) para confirmar a ação: ");
	scanf ("%f", &repet2);
       }  
	     
	while (repet2 == 1);
}