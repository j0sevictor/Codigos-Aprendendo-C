#include "tNo.h"

typedef struct {
    tNo* primeiro;
    tNo* marcador;
    tNo* ultimo;
    int tam;
} tLista;

void initLista(tLista* lista){
    lista->primeiro = NULL;
    lista->marcador = NULL;
    lista->ultimo = NULL;
    lista->tam = 0;
}

int final(tLista* lista){
    return lista->marcador == NULL;
}

int vazia(tLista* lista){
    return !(lista->tam);
}

int obterInfo(tLista* lista, tInfo* info){
    if (lista->marcador == NULL){
        return 0;
    }

    *info = lista->marcador->info;

    return 1;
}

int obterTam(tLista* lista){
    return lista->tam;
}

void incluirFim(tLista* lista, tInfo info){
    tNo* no;

    no = criaNo(info);

    if (vazia(lista)){
        lista->primeiro = no;
    }else{
        lista->ultimo->proximo = no;
    }
    
    lista->ultimo = no;
    lista->marcador = no;
    lista->tam++;
}