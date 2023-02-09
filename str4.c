#include<stdio.h>
#include<stdlib.h>
typedef struct aluno{
    char nome[50];
    int matricula;
    float IRA;

}Aluno;

int main(){
        int qnt_alunos, index;
        printf("informe a quantidade  de alunos: ");
        scanf("%d", &qnt_alunos);
        Aluno * vetor_de_alunos = (Aluno*) malloc(qnt_alunos*sizeof(Aluno));
        if(vetor_de_alunos==NULL){
            printf("erro!");
            exit(1);
        }
        for(index=0; index<qnt_alunos; index++){
            printf("digite o nome do aluno: ");
            scanf(" %[^\n]s", vetor_de_alunos[index].nome);
            printf("digite a matricula: ");
            scanf("%d", &vetor_de_alunos[index].matricula);
            printf("digite o ira:\n ");
            scanf("%f", &vetor_de_alunos[index].IRA);
        }
        for (index=0; index<qnt_alunos; index++){
            printf("%s\t%d\t%.2f\t", vetor_de_alunos[index].nome, vetor_de_alunos[index].matricula, vetor_de_alunos[index].IRA);
        }
        
return 0;  
}