#include "../Listas/Lista Contínua/listaContinua.h"

// Definição de uma Pilha
typedef tLista tPilha;

// Protótipos das funções
tPilha* criarPilha(int tamanho);
int excluirPilha(tPilha* pilha);

int removerElemento(tPilha* pilha);
int addElemento(tPilha* pilha, elemento valor);

elemento getValorTopo(tPilha* pilha);
int pilhaVazia(tPilha* pilha);
int pilhaCheia(tPilha* pilha);

// Funções
tPilha* criarPilha(int tamanho)
{
    return criarLista(tamanho);
}

int excluirPilha(tPilha* pilha)
{
    return excluirLista(pilha);
}

int addElemento(tPilha* pilha, elemento valor)
{
    return addElementoFinal(pilha, valor);
}

int removerElemento(tPilha* pilha)
{
    return removerElementoFinal(pilha);
}

elemento getValorTopo(tPilha* pilha)
{
    finalIndex(pilha);
    return getElemento(pilha);
}

int pilhaVazia(tPilha* pilha)
{
    return listaVazia(pilha);
}

int pilhaCheia(tPilha* pilha)
{
    return listaCheia(pilha);
}

