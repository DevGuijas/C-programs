#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[100],vogal[100];
    char consoante[100];
    int j,tam,v=-1,c=-1;
    
    printf(">>> CAPTURA DE TEXTO <<<\n");
    printf("Digite a frase: ");
    fflush(stdin);
    fgets(frase, sizeof(frase), stdin);
    tam=strlen(frase);
    for(j=0;j<tam;j++)
    {
        if(toupper(frase[j])=='A'||toupper(frase[j])=='E'||
           toupper(frase[j])=='I'||toupper(frase[j])=='O'||
           toupper(frase[j])=='U')
        {
            vogal[v++]=frase[j];
        }
        else{
            consoante[c++]=frase[j];
        }
    }
    
    vogal[v++]='\0';
    consoante[c++]='\0';
    printf("\n>>> Imprimindo todas as vogais:\n\n");
    for(v=0;v<tam;v++)
    {
        if(vogal[v]=='\0')break;
        printf("%c",vogal[v]);
    }
    printf("\n\n>>> Imprimindo todas as consoantes:\n\n");
    for(c=0;c<tam;c++)
    {
        if(consoante[c]=='\0')break;
        printf("%c",consoante[c]);
    }
    printf("\n\n>>> CONCLUIDO <<<");
    getch();
    return 0;
}