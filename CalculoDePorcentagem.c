/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

//declaração da constante
#define ICMS 0.18;

int main(void)
{
  float preco_produto, valor_icms;
  
  printf("Informe o valor do produto: " ); //Printer comum
  scanf("%f", &preco_produto); //Variável
  
  valor_icms = preco_produto * ICMS; //Definição de preço
  
  printf("Valor de imposto a ser pago: R$ %.2f",valor_icms ); //porcentagem aplicada.
  
  getch();
  return 0; //Exit Program.
}
