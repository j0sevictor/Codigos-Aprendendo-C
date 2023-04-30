#include <stdio.h>
#include "quickSort.h"

int main()
{
    int tam = 10;
    int vetor[10] = {2,4,5,6,7,1,10,8,9,3};
    int i;

    quickSort(vetor, 0, tam - 1);

    for (i = 0; i < tam; i++)
    {
        printf("%d\n", vetor[i]);
    }
}