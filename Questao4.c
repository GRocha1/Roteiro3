#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[31];
    char endereco[51];
    char curso[31];
    char matricula[11];
} tAluno;

    tAluno gAlunos[100];

unsigned int consultaAlunosPorCurso(char *curso, int *quant, int *cont){
    int i;

    for(i = 0; i < *quant; i++){
        if(!(strcmp(gAlunos[i].curso, curso))){
            (*cont)++;
        }
    }
}

int main (void){

    int i, quant, cont = 0;
    char curso2[31];

    printf("Insira a quantidade de alunos a serem cadastrados: ");
    scanf("%d%*c", &quant);
    for(i = 0; i < quant; i++){
        printf("Nome do #%d aluno: ", i+1);
        fgets(gAlunos[i].nome, 31, stdin);
        if(gAlunos[i].nome == '\n'){
            printf("Digite um nome\n");
            continue;
        }
        printf("Endereco do #%d aluno: ", i+1);
        fgets(gAlunos[i].endereco, 51, stdin);
        printf("Curso do #%d aluno: ", i+1);
        fgets(gAlunos[i].curso, 31, stdin);
        printf("Matricula do #%d aluno: ", i+1);
        fgets(gAlunos[i].matricula, 11, stdin);
    }

    printf("Insira o curso para consultar a quantidade de alunos cadastrados: ");
    fgets(curso2, 31, stdin);
    consultaAlunosPorCurso(curso2, &quant, &cont);
    printf("Estao cadastrados %d alunos no curso %s\n", cont, curso2);

return 0;
}
