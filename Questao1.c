#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    char nome[20];
    int i;

    printf("Digite um nome: ");
    fgets(nome, 20, stdin);

    for(i = 0; nome[i] != '\0'; i++){
        printf("%c\n", nome[i]);
    }
    return 0;
}
