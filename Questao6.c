#include <stdlib.h>
#include <stdio.h>

int num_votos, votos_jogador[24], num_jogador;
float percentual[24];

void VotosComputados(int votos_jogador[24])
{
    num_jogador = 1;

    while(num_jogador != 0)
    {
        printf("Numero do jogador a ser votado(0 encerra o programa): ");
        scanf("%d",&num_jogador);
        if(num_jogador < 0 || num_jogador > 23)
        {
            puts("Numero invalido!!!\nDigite Novamente: \n");
            scanf("%d",&num_jogador);

        }else
        {
            num_votos++;
            votos_jogador[num_jogador]++;
        }

        num_votos--;
    }

}

void totalVotos(int num_votos)
{
    printf("Total de votos: \n",num_votos);

}

void VotosPorJogador(int votos_jogador[24])
{
    int i;

    printf("Votos de cada jogador\n");

    for(i=1; i<24; i++)
    {
        if(votos_jogador[i] == 0)
            ;
        else
        {
            printf("Jogador num %d, recebeu: %d votos\n",i,votos_jogador[i]);
        }

    }

}

void Percentual_jogador(int num_votos, int votos_jogador[24])
{
    int i;

    printf("Percentual de votos de cada jogador");

    for(i=1; i<24; i++)
    {
        percentual[i] = (votos_jogador[i]/num_votos)*100;
        if(percentual[i] == 0)
            ;
        else
        {
            printf("Jogador num %d, recebeu %f%% dos votos",i,percentual[i]);
        }
    }
}

void MelhorJogador(int num_jogador, int votos_jogador[24], float percentual[24])
{



;

}
int main()
{
    return 0;
}
