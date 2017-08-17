#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nome_Banda[51];
    char Tipo_Musica[51];
    int N_integrantes;
    int Ranking;
}ficha_banda;

ficha_banda bandas[5];

void preenche_bandas(ficha_banda bandas[]){
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite o nome da banda: ");
        fgets(bandas[i].Nome_Banda, 51, stdin);
        printf("Digite o estilo musical: ");
        fgets(bandas[i].Tipo_Musica, 51, stdin);
        printf("Insira o numero de integrantes da banda: ");
        scanf("%d", &bandas[i].N_integrantes);
        printf("O Ranking: ");
        scanf("%d%*c", &bandas[i].Ranking);
}
    for(i = 0; i < 5; i++){
        printf("Nome da banda: %s\n", bandas[i].Nome_Banda);
        printf("Estilo musical: %s\n", bandas[i].Tipo_Musica);
        printf("Numero de integrantes: %d\n", bandas[i].N_integrantes);
        printf("Ranking: %d", bandas[i].Ranking);
    }
}


void BuscarRanking(int j){
    int i;
    for(i = 0; i < 5; i++){
        if(bandas[i].Ranking == j){
        printf("Nome da banda: %s\n", bandas[i].Nome_Banda);
        printf("Estilo musical: %s\n", bandas[i].Tipo_Musica);
        printf("Numero de integrantes: %d\n", bandas[i].N_integrantes);
        printf("Ranking: %d", bandas[i].Ranking);
        }
    }
}

int main(void){
    int j;

    preenche_bandas(bandas);
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &j);
    BuscarRanking(j);
    return 0;
}
