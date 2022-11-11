#include <stdio.h>
#include "tLista.h"

float mediaSalarios(tLista* lista){
    float media = 0;
    tInfo elem;
    
    if (vazia(lista)){
        return media;
    }

    primeiro(lista);
    while (!final(lista)){
        if (obterInfo(lista, &elem)){
            media += getSalario(&elem);
        }
        proximo(lista);
    }

    return media / obterTam(lista);
}

void acimaDaMedia(tLista* lista){
    float media = mediaSalarios(lista);
    tInfo elem;

    primeiro(lista);
    while (!final(lista)){
        if (obterInfo(lista, &elem)){
            if (getSalario(&elem) > media){
                imprimeInfo(elem);
            }
        }
        proximo(lista);
    }
}

int main(){
    tLista pessoas;
    tInfo dados;
    int x;

    initLista(&pessoas);
    while (1){
        dados = initInfo();

        incluirFim(&pessoas, &dados);

        printf("\nDIGITAR MAIS DADOS?\n|1| - SIM\n|0| - NAO\n");
        scanf("%d", &x);

        if (!x){
            break;
        }
    }

    acimaDaMedia(&pessoas);

    destroi(&pessoas);

    return 0;
}