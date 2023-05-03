#include <stdio.h>
#include "listaLincada.h"

int main()
{
    tListaLincada* lista = criarLista();

    addElementoFinal(lista, 10);
    addElementoInicio(lista, 5);
    addElementoFinal(lista, 6);
    addElementoInicio(lista, 1);
    addElementoFinal(lista, 10);
    addElementoInicio(lista, 5);
    addElementoFinal(lista, 6);
    addElementoInicio(lista, 1);

    printListaInt(lista);
    printf("%d\n", lista->qtdElementos);

    freeLista(lista);
    return 0;
}