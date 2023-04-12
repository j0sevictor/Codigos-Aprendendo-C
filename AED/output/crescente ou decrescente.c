#include <stdio.h>

int estaOrdenado(int lista[], int quantValores);

int main(){

    int vet[10] = {9};
    int quantValores = 1;

    printf("%d", estaOrdenado(vet, quantValores));

    return 0;
}

int estaOrdenado(int lista[], int quantValores)
{
    int i, crescente = 1, decrescente = 1;
    for (i = 0; i < quantValores - 1; i++)
    {
        if (lista[i] < lista[i + 1])
        {
            decrescente = 0;
        }
        else if (lista[i] > lista[i + 1])
        {
            crescente = 0;
        }

        if (!(crescente || decrescente))
        {
            break;
        }
    }

    return (crescente || decrescente);
}
