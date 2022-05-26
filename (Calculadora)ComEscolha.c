#include <stdio.h>
#include <stdlib.h>

void soma(){ //Função de somar.
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 + valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void subtrai(){ //Função de subtrair.
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 - valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void divide(){ //Função de dividir.
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 / valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void multiplica(){ //Função de multiplicar.
    float valor1, valor2, result;
    printf("\nDigite o 1 valor: ");
    scanf ("%f", &valor1);
    printf("Digite o 2 valor: ");
    scanf ("%f", &valor2);
    result = valor1 * valor2;
    printf("\nResultado: %.2f\n\n ", result);
    system ("pause");
    system("cls");
    menu();
}
void menu(){
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adição\n");
    printf("\t2- Subtração\n");
    printf("\t3- Divisão\n");
    printf("\t4- Multiplicação\n");
    printf("\t5- Sair\n");
    printf("Operacão: ");
    scanf ("%d", &escolha);

    switch (escolha){
        case 1:
            soma();
        break;

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFinalizando...\n\n");
        break;

        default:
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu();
            break;
    }
}


int main()
{
    menu();
    system("pause");
    return 0;
}
