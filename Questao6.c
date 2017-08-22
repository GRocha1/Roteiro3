#include <stdlib.h>
#include <stdio.h>

float Percentual(int votos, int total)
{
    return (((float)votos/(float)total)*100);
}
int main()
{
    int jogador[23], num_jogador, votos, i,aux, melhor_jogador, maior, maior_percent;

    votos = 0;

    printf("\t####### ENQUETE #######\n"
           "\n    Qual o melhor jogador da partida?    \n"
           "(Observe: Digite 0 para encerrar o programa)\n\n");

    for(i=0; i<23; i++)
    {
        jogador[i] = 0; /* Iniciar todos os jogadores com votos igual a 0 */
    }

    while(1)
    {
        printf("Numero do jogador: ");
        scanf("%d",&num_jogador);

        if(num_jogador == 0)
            break;
        else if(num_jogador > 23)
            puts("Numero invalido! Digite de 1 a 23.");
            else
            {
                jogador[num_jogador - 1]++;
                votos++;
            }
    }

    printf("\nRESULTADO DA VOTACAO: \n"
           "\nForam computados %d votos\n",votos);

    for(i=0; i<23; i++)
    {
        if(jogador[i] != 0)
            printf("Jogador numero [%d] recebeu: \t%d voto(s) \t%%%2.1f dos votos\n",i+1,jogador[i],Percentual(jogador[i],votos));
    }

    for(i=0; i<23; i++)
    {
        if(jogador[i] != 0)
        {
            maior = jogador[i];
            maior_percent = Percentual(jogador[i],votos);
        }
    }

    melhor_jogador = jogador[0];

    for(i=1; i<23; i++)
    {
        if(melhor_jogador <= jogador[i])
        {
            melhor_jogador = jogador[i];
            aux = (i+1);
        }
    }

    printf("\nO melhor jogador escolhido foi o %d com %d votos"
           " que corresponde a %2.1f%% do total de votos.",aux,melhor_jogador,maior_percent);


    return 0;



}
