#include <stdio.h>
#include <stdlib.h>

int* vetorFib(int n){
    int* vet;
    int i;
    int termo = 1, anterior = 0;

    vet = (int*) calloc(n, sizeof(int));

    for(i=0; i < n; i++){
        vet[i] = termo;

        termo = termo + anterior;
        anterior = termo - anterior;
    }

    return vet;
}

int* dobrarVetorFib(int* vet, int* tam){
    int i, j;

    vet = (int*) realloc(vet, (*tam * 2) * sizeof(int));

    for(i = *tam; i < *tam * 2; i++){
        vet[i] = vet[i - *tam] * 3;
    }

    *tam = *tam * 2;

    return vet;
}


int main(){
    int* v;
    int i, tam;

    printf("TAMANHO DO VETOR: ");
    scanf("%d", &tam);

    v = vetorFib(tam);

    printf("[");
    for(i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n");

    v = dobrarVetorFib(v, &tam);

    printf("[");
    for(i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
    printf("]");

    free(v);

    return 0;
}