#include <stdlib.h>

// Definição de TDA's
typedef int elemento;
typedef struct lista
{
    int tamanho;
    int qtdElementos;
    int i;
    elemento *elem;
} tLista;

// Protótipo das funções
int criarLista(tLista *lista, int tamanho);
int excluirLista(tLista *lista);

int addElementoInicio(tLista *lista, int valor);
int addElementoFinal(tLista *lista, int valor);
int removerElementoInicio(tLista *lista);
int removerElementoFinal(tLista *lista);

int listaVazia(tLista *lista);
int listaCheia(tLista *lista);

elemento getElementoENext(tLista *lista);
elemento getElemento(tLista *lista, int i);
void resetIndex(tLista *lista);
void finalIndex(tLista *lista);

// Funções de Criação e Exclusão de Listas
int criarLista(tLista *lista, int tamanho)
{
    lista->elem = (elemento*) malloc(tamanho * sizeof(elemento));
    if (lista->elem != NULL)
    {
        lista->tamanho = tamanho;
        lista->qtdElementos = 0;
        lista->i = 0;
        return 1;
    }

    return 0;
}

int excluirLista(tLista *lista)
{
    if (!listaVazia(lista)){
        free(lista->elem);
        lista->qtdElementos = 0;
        lista->tamanho = 0;
        lista->i = 0;
        return 1;
    }
    return 0;
}

// Funções de Modificar o estado das Listas

int addElementoInicio(tLista *lista, int valor)
{
    if (listaCheia(lista))
    {
        return 0;
    }

    int i, aux;
    for (i = 0; i <= lista->qtdElementos; i++)
    {
        if (i == lista->qtdElementos)
        {
            lista->elem[i] = valor;
            continue;
        }

        aux = lista->elem[i];
        lista->elem[i] = valor;
        valor = aux;
    }
    lista->qtdElementos++;

    return 1;
}

int addElementoFinal(tLista *lista, int valor)
{
    if (listaCheia(lista))
    {
        return 0;
    }

    lista->elem[lista->qtdElementos] = valor;
    lista->qtdElementos++;
    return 1;
}

int removerElementoInicio(tLista *lista)
{
    if (listaVazia(lista))
    {
        return 0;
    }

    int i;
    for (i = 0; i < (lista->qtdElementos - 1); i++)
    {
        lista->elem[i] = lista->elem[i+1];
    }

    lista->qtdElementos--;
    return 1;
}

int removerElementoFinal(tLista *lista)
{
    if (listaVazia(lista))
    {
        return 0;
    }
    
    lista->qtdElementos--;
    return 1;
}

void resetIndex(tLista *lista)
{
    lista->i = 0;
}

void finalIndex(tLista *lista)
{
    if (!listaVazia(lista))
    {
        lista->i = lista->qtdElementos - 1;
        return;
    }
    lista->i = 0;
}


// Funções de checagem de estado

int listaVazia(tLista *lista)
{
    return !(lista->qtdElementos);
}

int listaCheia(tLista *lista)
{
    return (lista->qtdElementos == lista->tamanho);
}

// Funções para obter valores das Listas

elemento getElementoENext(tLista *lista)
{
    elemento elem = lista->elem[lista->i];
    lista->i++;
    if (lista->i >= lista->qtdElementos)
    {
        lista->i = 0;
    }
    return elem;
}

elemento getElemento(tLista *lista, int i)
{
    return lista->elem[i];
}
