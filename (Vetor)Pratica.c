#include <stdio.h>

int vetor[5];

void leitura(){
    printf("(1)Digite o valor >>> ");
   scanf("%d",&vetor[0]);
   
   printf("(2)Digite o valor >>> ");
   scanf("%d",&vetor[1]);
   
   printf("(3)Digite o valor >>> ");
   scanf("%d",&vetor[2]);
   
   printf("(4)Digite o valor >>> ");
   scanf("%d",&vetor[3]);
   
   printf("(5)Digite o valor >>> ");
   scanf("%d",&vetor[4]);
}

void leitura2(){  
    printf("\nPosição (1) >>> %d \n", vetor[0]);
    printf("Posição (2) >>> %d \n", vetor[1]);
    printf("Posição (3) >>> %d \n", vetor[2]);
    printf("Posição (4) >>> %d \n", vetor[3]);
    printf("Posição (5) >>> %d \n", vetor[4]);
}

int main(void)
{
    int aux;
    leitura();
    leitura2();
   
    if (vetor[0] > vetor[1]){
        aux = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = aux;
    }
    if (vetor[0] > vetor[2]){
        aux = vetor[0];
        vetor[0] = vetor[2];
        vetor[2] = aux;
    }
    if (vetor[0] > vetor[3]){
        aux = vetor[0];
        vetor[0] = vetor[3];
        vetor[3] = aux;
    }
    if (vetor[0] > vetor[4]){
        aux = vetor[0];
        vetor[0] = vetor[4];
        vetor[4] = aux;
    }
   
   
    if (vetor[1] > vetor[2]){
        aux = vetor[1];
        vetor[1] = vetor[2];
        vetor[2] = aux;
    }
    if (vetor[1] > vetor[3]){
        aux = vetor[1];
        vetor[1] = vetor[3];
        vetor[3] = aux;
    }
    if (vetor[1] > vetor[4]){
        aux = vetor[1];
        vetor[1] = vetor[4];
        vetor[4] = aux;
    }
    //Separação
    if (vetor[2] > vetor[3]){
        aux = vetor[2];
        vetor[2] = vetor[3];
        vetor[3] = aux;
    }
    if (vetor[2] > vetor[4]){
        aux = vetor[2];
        vetor[2] = vetor[4];
        vetor[4] = aux;
    }
   
    if (vetor[3] > vetor[4]){
        aux = vetor[3];
        vetor[3] = vetor[4];
        vetor[4] = aux;
    }
}