#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char palavra[31];
	int i, j = 0;

	printf("Insira uma palavra: ");
	scanf("%s", palavra);
	char palindromo[strlen(palavra)];
	
	for(i = strlen(palavra) - 1; i >= 0; i--){
		palindromo[j] = palavra[i];
		j++;	
	}
	palindromo[strlen(palavra)] = '\0';
	if(!(strcmp(palavra, palindromo))){
		printf("\nA palavra %s eh palindromo\n", palavra);
	}else{
		printf("\nA palavra %s nao eh palindromo\n", palavra);
	}

	return 0;
}
