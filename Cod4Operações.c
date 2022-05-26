#include <stdio.h>

int main(){
    
    
    int n1, n2, n3, n4, n5, n6, n7, n8;
    float resultadosomar, resultadosubtrair, resultadomultiplicar, resultadodividir;
    
    printf(">>> Escolha 2 sequências de números paras as 4 operações <<<\n");
    printf("(!!!) AVISO: VALE RESSALTAR QUE SERÃO NAS SEGUINTES ORDENS: SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO E DIVISÃO. \n");
    
    printf("(Soma) Escolha dois números: ");
    scanf("%d%d", &n1,&n2);
    
    printf("(Subtração) Escolha dois números: ");
    scanf("%d%d", &n3,&n4);
    
    printf("(Multiplicação) Escolha dois números: ");
    scanf("%d%d", &n5,&n6);
    
    printf("(Divisão) Escolha dois números: ");
    scanf("%d%d", &n7,&n8);
    
    resultadosomar = n1 + n2;
    resultadosubtrair = n3 - n4;
    resultadomultiplicar = n5 * n6;
    resultadodividir = n7 / n8;
    
    printf("(RESULTADO DA SOMA) %2.f\n", resultadosomar);
    printf("(RESULTADO DA SUBTRAÇÃO) %2.f\n", resultadosubtrair);
    printf("(RESULTADO DA MULTIPLICAÇÃO) %2.f\n", resultadomultiplicar);
    printf("(RESULTADO DA DIVISÃO) %2.f\n", resultadodividir);
    
    

    return 0;
}