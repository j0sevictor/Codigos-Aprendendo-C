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

void incluirFim(tLista* lista, tInfo* info){
    tNo* no;

    no = criaNo(*info);

    if (vazia(lista)){
        lista->primeiro = no;
    }else{
        lista->ultimo->proximo = no;
    }
    
    lista->ultimo = no;
    lista->marcador = no;
    lista->tam++;
}

void incluirInicio(tLista* lista, tInfo* info){
    tNo* no;

    no = criaNo(*info);

    if(vazia(lista)){
        lista->ultimo = no;
    }else{
        no->proximo = lista->primeiro;
    }

    lista->primeiro = no;
    lista->marcador = no;
    lista->tam++;
}

void excuir(tLista* lista, int pos){
    tNo *auxA, *auxB;
    int i;
    
    if (pos < 0 || pos >= lista->tam){
        return;
    }

    auxA = lista->primeiro;
    for (i = 0; i < pos; i++){
        auxB = auxA;
        auxA = auxA->proximo;
    }

    if (auxA != lista->primeiro){
        auxB->proximo = auxA->proximo;
        if (auxA == lista->ultimo){
            lista->ultimo = auxB;
        }
    }else{
        lista->primeiro = auxA->proximo;
        if (auxA == lista->ultimo){
            lista->ultimo = auxA->proximo;
        }
    }

    lista->marcador = NULL;
    lista->tam--;
    free(auxA);
}

void primeiro(tLista* lista){
    lista->marcador = lista->primeiro;
}

void proximo(tLista* lista){
    if (lista->marcador != NULL){
        lista->marcador = lista->marcador->proximo;
    }
}

void imprimir(tLista* lista){
    tInfo x;
    int termoInfo = 0;

    primeiro(lista);
    while (!final(lista)){
        termoInfo = obterInfo(lista, &x);
        if(termoInfo){
            imprimeInfo(x);
        }
        proximo(lista);
    }
}

void destroi(tLista* lista){
    tNo* aux;

    primeiro(lista);
    while (!final(lista)){
        aux = lista->marcador;
        proximo(lista);
        free(aux);
    }

    lista->primeiro = NULL;
    lista->marcador =NULL;
    lista->ultimo = NULL;
    lista->tam = 0;
}