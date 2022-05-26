#include <stdio.h>

float Somar(int n1, int n2){
    float resultadosomar;
    resultadosomar = n1 + n2;
    return resultadosomar;
}

float Subtrair(int n3, int n4){
    float resultadosubtrair;
    resultadosubtrair = n3 - n4;
    return resultadosubtrair;
}

float Multiplicar(int n5, int n6){
    float resultadomultiplicar;
    resultadomultiplicar = n5 * n6;
    return resultadomultiplicar;
}

float Dividir(int numero7, int numero8){
    float resultadodividir;
    resultadodividir = numero7 / numero8;
    return resultadodividir;
}

int main(){
    
    int n1, n2, n3, n4, n5, n6, n7, n8;
    
    printf(">>> Escolha 2 sequências de números paras as 4 operações <<<\n");
    printf("(!!!) AVISO: VALE RESSALTAR QUE SERÃO NAS SEGUINTES ORDENS: SOMA, SUBTRAÇÃO, MULTIPLICAÇÃO E DIVISÃO. \n");
    
    printf("(Soma) Escolha dois números: ");
    scanf("%d", &n1,&n2);
    
    printf("(Subtração) Escolha dois números: ");
    scanf("%d", &n3,&n4);
    
    printf("(Multiplicação) Escolha dois números: ");
    scanf("%d", &n5,&n6);
    
    printf("(Divisão) Escolha dois números: ");
    scanf("%d", &n7,&n8);
    
    printf("(RESULTADO DA SOMA) %2.f\n", resultadosomar);
    printf("(RESULTADO DA SUBTRAÇÃO) %2.f\n", resultadosubtrair);
    printf("(RESULTADO DA MULTIPLICAÇÃO) %2.f\n", resultadomultiplicar);
    printf("(RESULTADO DA DIVISÃO) %2.f\n", resultadodividir);

    return 0;
}