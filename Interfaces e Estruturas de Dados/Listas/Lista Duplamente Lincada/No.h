#include <stdlib.h>

typedef int elemento;

typedef struct no
{
    elemento* valor;
    struct no* proximo;
    struct no* anterior;
} tNo;

tNo* criarNo(elemento* valor)
{
    tNo* novoNo = (tNo*) malloc(sizeof(tNo)); 
    if (novoNo != NULL)
    {
        novoNo->valor = valor;
        novoNo->proximo = NULL;
        novoNo->anterior = NULL;
        return novoNo;
    }

    return NULL;
}

elemento* criarElemento()
{
    elemento* novoElem = (elemento*) malloc(sizeof(elemento));
    if (novoElem != NULL)
    {
        return novoElem;
    }
    return NULL;
}