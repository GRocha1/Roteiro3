#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nome_Banda[51];
    char Tipo_Musica[51];
    int N_integrantes;
    int Ranking;
}ficha_banda;

static ficha_banda bandas[5];

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
        printf("Ranking: %d\n", bandas[i].Ranking);
    }
}


void BuscarRanking(int j){
    int i;
    for(i = 0; i < 5; i++){
        if(bandas[i].Ranking == j){
        printf("Nome da banda: %s\n", bandas[i].Nome_Banda);
        printf("Estilo musical: %s\n", bandas[i].Tipo_Musica);
        printf("Numero de integrantes: %d\n", bandas[i].N_integrantes);
        printf("Ranking: %d\n", bandas[i].Ranking);
        }
    }
}

void BuscarEstilo(char *estilo){
    int i, j = 0;
    for(i = 0; i < 5; i++){
        if(!(strcmp(bandas[i].Tipo_Musica, estilo))){
            printf("\n%s\n", bandas[i].Nome_Banda);
        }else{
           j++;
        }
    }
    if(j == 5){
        puts("Nao foram encontradas bandas com esse estilo musical.");
    }
}

void BuscarBandas(char *banda){
    int i, j = 0;
    for(i = 0; i < 5; i++){
        if(!(strcmp(bandas[i].Nome_Banda, banda))){
            printf("%s\n", bandas[i].Nome_Banda);
        }else{
           j++;
        }
    }
    if(j == 5){
        printf("A %s banda nao foi encontrada nos favoritos.\n", banda);
    }
}

int main(void){
    int j;
    char estilo[51], banda1[51];

    preenche_bandas(bandas);
    printf("Digite um numero de 1 a 5: ");
    scanf("%d%*c", &j);
    BuscarRanking(j);
    printf("Insira o estilo musical para encontrar bandas: ");
    fgets(estilo, 51, stdin);
    printf("Bandas do estilo musical %s encontradas: \n", estilo);
    BuscarEstilo(estilo);
    printf("Insira o nome da banda para procura-la nos favoritos: ");
    fgets(banda1, 51, stdin);
    printf("Resultado da busca: \n");
    BuscarBandas(banda1);

    return 0;
}
