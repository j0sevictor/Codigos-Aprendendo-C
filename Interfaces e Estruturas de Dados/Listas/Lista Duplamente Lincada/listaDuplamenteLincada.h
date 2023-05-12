#include <stdio.h>
#include "No.h"

typedef struct
{
    tNo* primeiro;
    tNo* ultimo;
    tNo* index;
    int qtdElementos;
}ListaDL;


// Protótipos
ListaDL* criarLista();
void freeLista(ListaDL* lista);

int addElementoInicio(ListaDL* lista, elemento* valor);
int addElementoFinal(ListaDL* lista, elemento* valor);
int removerElementoInicio(ListaDL* lista);
int removerElementoFinal(ListaDL* lista);
int removerElemento(ListaDL* lista, elemento* elem);
void indexInicio(ListaDL* lista);
void indexFinal(ListaDL* lista);
void indexProximo(ListaDL* lista);
int final(ListaDL* lista);
elemento* getIndex(ListaDL* lista);

int listaVazia(ListaDL* lista);
void printListaInt(ListaDL* lista);


// Funções
ListaDL* criarLista()
{
    ListaDL* lista = (ListaDL*) malloc(sizeof(ListaDL));
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

void freeLista(ListaDL* lista)
{
    tNo* aux;
    while (lista->primeiro != NULL)
    {
        aux = lista->primeiro;
        lista->primeiro = aux->proximo;
        lista->qtdElementos--;
        free(aux);
    }

    free(lista);
}

int addElementoInicio(ListaDL* lista, elemento* valor)
{   
    if (valor == NULL)
    {
        return 0;
    }

    tNo* novoElemento = criarNo(valor); 
    if (novoElemento == NULL)
    {
        return 0;
    }

    if (lista->primeiro == NULL)
    {
        lista->ultimo = novoElemento;
    }
    else
    {
        lista->primeiro->anterior = novoElemento;
        novoElemento->proximo = lista->primeiro;
    }
    lista->primeiro = novoElemento;
    lista->index = novoElemento;
    lista->qtdElementos++;

    return 1;
}

int addElementoFinal(ListaDL* lista, elemento* valor)
{
    if (valor == NULL)
    {
        return 0;
    }

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
        lista->ultimo->proximo = novoElemento;
        novoElemento->anterior = lista->ultimo;
    }

    lista->ultimo = novoElemento;
    lista->index = novoElemento;
    lista->qtdElementos++;

    return 1;
}

int removerElementoInicio(ListaDL* lista)
{
    if (listaVazia(lista))
    {
        return 0;
    }

    tNo* no = lista->primeiro;
    
    lista->primeiro = lista->primeiro->proximo;
    lista->primeiro->anterior = NULL;
    free(no); 

    lista->qtdElementos--;

    return 1;
}

int removerElementoFinal(ListaDL* lista)
{
    if (listaVazia(lista))
    {
        return 0;
    }

    tNo* no = lista->ultimo;
    lista->ultimo = lista->ultimo->anterior;
    lista->ultimo = NULL;
    free(no);

    lista->qtdElementos--;

    return 1;    
}

int removerElemento(ListaDL* lista, elemento* elem)
{
    if (listaVazia(lista))
    {
        return 0;
    }

    tNo* no;
    indexInicio(lista);
    while (lista->index != NULL)
    {
        no = lista->index;
        lista->index = lista->index->proximo;

        if (*(no->valor) == *elem)
        {
            no->proximo->anterior = no->anterior;
            no->anterior->proximo = no->proximo;
            free(no);
            lista->qtdElementos--;
        }
    }

    return 1;
}

int listaVazia(ListaDL* lista)
{
    return !(lista->qtdElementos);
}

void printListaInt(ListaDL* lista)
{
    for (lista->index = lista->primeiro; lista->index != NULL; lista->index = lista->index->proximo)
    {
        printf("%d ", lista->index->valor);
    }
    printf("\n");
}

void indexInicio(ListaDL* lista)
{
    lista->index = lista->primeiro;
}

void indexFinal(ListaDL* lista)
{
    lista->index = lista->ultimo;
}

void indexProximo(ListaDL* lista)
{
    if (final(lista))
    {
        indexInicio(lista);
    }
    else{
        lista->index = lista->index->proximo;
    }

}

elemento* getIndex(ListaDL* lista)
{
    return lista->index->valor;
}

int final(ListaDL* lista)
{
    return lista->index == NULL;
}
