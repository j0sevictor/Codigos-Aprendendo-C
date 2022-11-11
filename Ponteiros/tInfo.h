#include <stdio.h>

//tInfo Inteiro
/*
typedef int tInfo;

void imprimeInfo(tInfo info){
    printf("Elemento: %d\n", info);
}
*/

//tInfo Estrutura char-float para Nome e Salário

typedef struct{
    char nome[30];
    float salario;
} tInfo;

void imprimeInfo(tInfo info){
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Nome: %s\nSalario: %f\n", info.nome, info.salario);
}

tInfo initInfo(){
    tInfo inf;

    printf("\nNome: ");
    scanf("%s", &inf.nome);
    printf("Salario: ");
    scanf("%f", &inf.salario);

    return inf;
}

float getSalario(tInfo* inf){
    return inf->salario;
}