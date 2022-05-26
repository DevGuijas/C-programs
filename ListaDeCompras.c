/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int GravadorDeArquivos(){
  FILE *pont_arq;
  char palavra1[30];
  char palavra2[30];
  char palavra3[30];
  char palavra4[30];
  char palavra5[30];
  char palavra6[30];
  char palavra7[30];
  char palavra8[30];
  char palavra9[30];
  char palavra10[30];
 
  pont_arq = fopen("ListaDeCompras.txt", "w");
 
  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo! =(");
  return 1;
  }
 
  printf("Digite até 10 itens para sua lista de compras: \n");
  printf("Item 1: ");
  scanf("%s", palavra1);
  
  printf("Item 2: ");
  scanf("%s", palavra2);
  
  printf("Item 3: ");
  scanf("%s", palavra3);
  
  printf("Item 4: ");
  scanf("%s", palavra4);
  
  printf("Item 5: ");
  scanf("%s", palavra5);
  
  printf("Item 6: ");
  scanf("%s", palavra6);
  
  printf("Item 7: ");
  scanf("%s", palavra7);
  
  printf("Item 8: ");
  scanf("%s", palavra8);
  
  printf("Item 9: ");
  scanf("%s", palavra9);
  
  printf("Item 10: ");
  scanf("%s", palavra10);
 
  fprintf(pont_arq, "%s", "Lista: \n");
  fprintf(pont_arq, "%s", "\n");
  fprintf(pont_arq, "- %s\n", palavra1);
  fprintf(pont_arq, "- %s\n", palavra2);
  fprintf(pont_arq, "- %s\n", palavra3);
  fprintf(pont_arq, "- %s\n", palavra4);
  fprintf(pont_arq, "- %s\n", palavra5);
  fprintf(pont_arq, "- %s\n", palavra6);
  fprintf(pont_arq, "- %s\n", palavra7);
  fprintf(pont_arq, "- %s\n", palavra8);
  fprintf(pont_arq, "- %s\n", palavra9);
  fprintf(pont_arq, "- %s", palavra10);

  fclose(pont_arq);
 
  printf("Dados gravados com sucesso!");
 
  return 0;        
}

int main()
{
        int retorno;
        retorno = GravadorDeArquivos();
       
        if (retorno == 1){
                printf("\nDeu ruim DEV, deu ruim... =(\n");
        }
        else{
                printf("\nTudo certo DEV =)\n");
        }
        
        return 0;
}