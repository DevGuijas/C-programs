#include<stdio.h>
#include<stdlib.h>

double juroscompostos(double,double,int);
int main(){
	double c,j,valor;
	int t;
	  printf("Digite o valor montante:");
	  scanf("%lf",&c);
	  printf("Digite o tempo (mês):");
	  scanf("%d",&t);
	  printf("Digite a taxa de juros:");
	  scanf("%lf",&j);
	printf("\n");
    valor = juroscompostos(c,j,t);
    printf("Valor após a aplicação: %.2lf",valor);
	return 0;
}
double juroscompostos(double valor, double taxa, int meses){

    double Total;
   if (meses==0)
   {
       return valor;
   }
    else
    {

        valor = valor  + (valor * (taxa / 100));
        meses --;
        Total = juroscompostos(valor,taxa,meses);
 	 return Total;
    }

   
}
