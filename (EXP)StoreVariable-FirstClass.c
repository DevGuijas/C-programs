#include <stdio.h>

int main(void)
{
  int primeiro_valor, segundo_valor, valor_final;
  printf("Informe o primeiro valor: ");
  scanf("%d", &primeiro_valor); //Armaz do primeiro valor.

  printf("Informe o segundo valor: ");
  scanf("%d", &segundo_valor); //Armaz do segundo valor.

  valor_final = primeiro_valor + segundo_valor; //Definição da soma.

  printf("Valor total da soma: %d",valor_final ); //Valor Final.

}
