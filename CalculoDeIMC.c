#include <stdio.h>
#include <conio.h>

// Pograma para calcular IMC.
void main() {
  int peso; //Variável Peso.
  float altura, imc; //Variável Altura.

  printf("Informe o peso (em kgs):\n");
  scanf("%d", &peso); //Armazenar Peso.

  printf("\nInforme a altura (em metros):\n");
  scanf("%f", &altura); //Armazenar Altura.

  imc = peso / (altura * altura); //Calculo do IMC.

  printf("\n\nIMC = peso / (altura * altura)"); //Daqui para baixo só será Prinf.
  printf("\nIMC = %.2f", imc);
  if (imc < 20)
     printf(" (abaixo do peso).");
  else if ((imc >= 20) && (imc < 25))
          printf(" (peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (acima do peso).");
            else if ((imc >= 30) && (imc < 34))
                    printf(" (obeso).");
		 else
		    printf(" (muito obeso).");
}
