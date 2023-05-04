#include "../Listas/Lista Contínua/listaContinua.h"

typedef tLista tFila;

// Protótipos das funções
tFila* criarFila(int tamanho);
int excluirFila(tFila* fila);

int removerElemento(tFila* fila);
int addElemento(tFila* fila, elemento valor);

elemento getPrimeiro(tFila* fila);
elemento getUltimo(tFila* fila);
int filaVazia(tFila* fila);
int filaCheia(tFila* fila);

// Funções
tFila* criarFila(int tamanho)
{
    return criarLista(tamanho);
}

int excluirFila(tFila* fila)
{
    return excluirLista(fila);
}

int addElemento(tFila* fila, elemento valor)
{
    return addElementoFinal(fila, valor);
}

int removerElemento(tFila* fila)
{
    return removerElementoInicio(fila);
}

elemento getPrimeiro(tFila* fila)
{
    resetIndex(fila);
    return getElemento(fila);
}

elemento getUltimo(tFila* fila)
{
    finalIndex(fila);
    return getElemento(fila);
}

int filaVazia(tFila* fila)
{
    return listaVazia(fila);
}

int filaCheia(tFila* fila)
{
    return listaCheia(fila);
}

