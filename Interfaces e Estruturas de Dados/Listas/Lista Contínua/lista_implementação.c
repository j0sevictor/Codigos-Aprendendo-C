#include <stdio.h>
#include "listaContinua.h"

int main()
{
    tLista* lista = criarLista(10);

    printf("Lista Vazia: %d\n", listaVazia(lista));
    addElementoInicio(lista, 10);
    addElementoFinal(lista, 2);
    addElementoInicio(lista, 3);
    addElementoInicio(lista, 11);
    addElementoFinal(lista, 7);
    addElementoInicio(lista, 21);
    addElementoInicio(lista, 10);
    addElementoFinal(lista, 2);
    addElementoInicio(lista, 3);
    addElementoInicio(lista, 11);
    
    removerElementoFinal(lista);
    removerElementoInicio(lista);
    removerElementoInicio(lista);

    addElementoFinal(lista, 5);

    printf("Lista Vazia: %d\n", listaVazia(lista));
    printf("Lista Cheia: %d\n", listaCheia(lista));

    int i;
    for (i = 0; i < lista->qtdElementos; i++)
    {
        printf("%d ", getElemento(lista, i));
    }

    printf("\n%d\n", excluirLista(lista));
}
