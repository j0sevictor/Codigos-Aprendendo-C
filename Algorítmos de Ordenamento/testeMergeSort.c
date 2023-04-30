#include <stdio.h>
#include "mergeSort.h"

int main()
{
    int tam = 100;
    int vetor[tam];
    int i;

    for (i = 0; i < tam; i++)
    {
        vetor[i] = tam - i;
    }

    mergeSort(vetor, 0, tam / 2, tam);


    for (i = 0; i < tam; i++)
    {
        printf("%d\n", vetor[i]);
    }
}