#include <stdlib.h>

typedef int elemento;

typedef struct no
{
    elemento valor;
    struct no* next;
} tNo;

tNo* criarNo(elemento valor)
{
    tNo* novoNo = (tNo*) malloc(sizeof(tNo)); 
    if (novoNo == NULL)
    {
        return NULL;
    }
    else
    {
        novoNo->valor = valor;
        novoNo->next = NULL;
        return novoNo;
    }
}