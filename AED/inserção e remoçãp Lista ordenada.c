#include <stdio.h>

int inserirOrdenado(int lista[], int tam, int* quantValores, int novoValor);

int excluirOrdenado(int lista[], int* quantValores, int valor);

int main(){

    int vet[10] = {1, 2, 3, 4, 5, 6, 8, 9};
    int quantValores = 8;
    int tam = 10;

    inserirOrdenado(vet, tam, &quantValores, 0);
    inserirOrdenado(vet, tam, &quantValores, 7);
    inserirOrdenado(vet, tam, &quantValores, 11);

    excluirOrdenado(vet, &quantValores, 9);
    excluirOrdenado(vet, &quantValores, 0);

    int i;
    for (i = 0; i < quantValores; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}

int excluirOrdenado(int lista[], int* quantValores, int valor)
{
    if (*quantValores == 0)
    {
        return 0;
    }

    int i, achado = 0;
    for (i = 0; i < *quantValores; i++)
    {
        if (achado)
        {
            lista[i-1] = lista[i];
        }
        else if (lista[i] == valor)
        {
            achado = 1;
        }
    }

    if (achado)
    {
        *quantValores = *quantValores - 1;
    }
    
    return 1;
}

int inserirOrdenado(int lista[], int tam, int* quantValores, int novoValor) 
{
    if (*quantValores == tam)
    {
        return 0;
    }

    int i, aux;
    for (i = 0; i <= *quantValores; i++)
    {
        if (novoValor == lista[i])
        {
            return 0;
        }
        else if (i == *quantValores)
        {
            lista[i] = novoValor;
        }
        else if (novoValor < lista[i])
        {
            aux = lista[i];
            lista[i] = novoValor;
            novoValor = aux;
        }
    }

    *quantValores = *quantValores + 1; 
    return 1;
}

