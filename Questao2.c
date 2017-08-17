#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{

    char nome[50];
    int i,j;

    printf("Informe um nome: ");
    fgets(nome,50,stdin);

    for(i=0; i<strlen(nome); i++)
    {
        for(j=0; j<i; j++)
            printf("%c",nome[j]);

        printf("\n");
    }

    return 0;

}
