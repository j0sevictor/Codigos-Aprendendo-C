#include <stdlib.h>
#include <stdio.h>

typedef int tInfo;

void imprimeInfo(tInfo info){
    printf("Elemento: %d\n", info);
}

typedef struct no {
    tInfo info;
    struct no* proximo;
} tNo;

tNo* criaNo(tInfo elem){
    tNo* no;

    no = (tNo*) malloc(sizeof(tNo));

    no->info = elem;
    no->proximo = NULL;

    return no;
}