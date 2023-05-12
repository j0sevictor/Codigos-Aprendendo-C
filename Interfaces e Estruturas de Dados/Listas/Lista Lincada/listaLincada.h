#include <stdio.h>
#include "No.h"

typedef struct
{
    tNo* primeiro;
    tNo* ultimo;
    tNo* index;
    int qtdElementos;
}tListaLincada;


// Protótipos
tListaLincada* criarLista();
void freeLista(tListaLincada* lista);

int addElementoInicio(tListaLincada* lista, elemento valor);
int addElementoFinal(tListaLincada* lista, elemento valor);
void indexInicio(tListaLincada* lista);
void indexFinal(tListaLincada* lista);
void indexProximo(tListaLincada* lista);
int final(tListaLincada* lista);
elemento getIndex(tListaLincada* lista);

int listaVazia(tListaLincada* lista);
void printListaInt(tListaLincada* lista);


// Funções
tListaLincada* criarLista()
{
    tListaLincada* lista = (tListaLincada*) malloc(sizeof(tListaLincada));
    if (lista != NULL)
    {
        lista->primeiro = NULL;
        lista->ultimo = NULL;
        lista->index = NULL;
        lista->qtdElementos = 0;

        return lista;
    }

    return NULL;
}

void freeLista(tListaLincada* lista)
{
    tNo* aux;
    while (!lista->primeiro != NULL)
    {
        aux = lista->primeiro;
        lista->primeiro = aux->next;
        lista->qtdElementos--;
        free(aux);
    }

    free(lista);
}

int addElementoInicio(tListaLincada* lista, elemento valor)
{   
    tNo* novoElemento = criarNo(valor); 
    if (novoElemento == NULL)
    {
        return 0;
    }

    if (lista->primeiro == NULL)
    {
        lista->ultimo = novoElemento;
        lista->index = novoElemento;
    }
    else
    {
        novoElemento->next = lista->primeiro;
    }

    lista->primeiro = novoElemento;
    lista->qtdElementos++;

    return 1;
}

int addElementoFinal(tListaLincada* lista, elemento valor)
{
    tNo* novoElemento = criarNo(valor);
    if (novoElemento == NULL)
    {
        return 0;
    }

    if (listaVazia(lista))
    {
        lista->primeiro = novoElemento;
    }
    else
    {
        lista->ultimo->next = novoElemento;
    }

    lista->ultimo = novoElemento;
    lista->index = novoElemento;
    lista->qtdElementos++;

    return 1;
}

int listaVazia(tListaLincada* lista)
{
    return !(lista->qtdElementos);
}

void printListaInt(tListaLincada* lista)
{
    for (lista->index = lista->primeiro; lista->index != NULL; lista->index = lista->index->next)
    {
        printf("%d ", lista->index->valor);
    }
    printf("\n");
}

void indexInicio(tListaLincada* lista)
{
    lista->index = lista->primeiro;
}

void indexFinal(tListaLincada* lista)
{
    lista->index = lista->ultimo;
}

void indexProximo(tListaLincada* lista)
{
    if (final(lista))
    {
        indexInicio(lista);
    }
    else{
        lista->index = lista->index->next;
    }

}

elemento getIndex(tListaLincada* lista)
{
    return lista->index->valor;
}

int final(tListaLincada* lista)
{
    return lista->index == NULL;
}
