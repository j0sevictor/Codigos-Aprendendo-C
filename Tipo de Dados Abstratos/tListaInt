#include <stdio.h>
#define TAM 100

typedef struct {
    int vet[TAM];
    int lenVet;
} tListaInt;

// FUNÇÕES CONSTRUTORAS -----------------------------------------

tListaInt initVetIntVazio(){
    tListaInt t;

    t.lenVet = 0;

    return t;
}

tListaInt initVetInt(int n){
    tListaInt t;
    int i;

    for (i = 0; i < n; i++){
        printf("DIGITE O VALOR %d: ", i+1);
        scanf("%d", &t.vet[i]);
    }

    t.lenVet = n;

    return t;
}

// FUNÇÕES PRODUTORAS -------------------------------------

int VaziaListaVetInt(tListaInt v){
    return !v.vet;
}

int pesquisaElementoListaVetIntSequncial(tListaInt l, int elem){
    int i;

    for (i=0; i < l.lenVet; i++){
        if (l.vet[i] == elem){
            return i;
        }
    }

    return -1;
}

int pesquisaElementoListaVetIntBinario(tListaInt l, int elem){
    /*
        A fim do funcionamento da função, a lista fornecida deve está ordenada
        em ordem crescente.
    */

    int fim, inicio, meio;

    inicio = 0;
    fim = l.lenVet - 1;

    while(inicio <= fim){
        meio = (inicio + fim)/2;
        if (l.vet[meio] == elem){
            return meio;
        }else if (l.vet[meio] > elem){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }
    }

    return -1;
}

int tamanhoVetor(tListaInt v){
    return v.lenVet;
}

int ElementoVetor(tListaInt v, int i){
    if (!VaziaListaVetInt(v)){
        if (i >= 0 && i < v.lenVet){
            return v.vet[i];
        }
    }

    return -1;
}

void PrintfListaVetInt(tListaInt v){
    int i;

    printf("Os Elementos da Lista:\n");
    for (i = 0; i < v.lenVet; i++){
        printf("%d ", v.vet[i]);
    }
    printf("\n\n");
}

tListaInt somaListaVetInt(tListaInt v1, tListaInt v2){
    tListaInt soma;

    if (v1.lenVet == v2.lenVet){
        int i;

        for (i = 0; i < v1.lenVet; i++){
            soma.vet[i] = v1.vet[i] + v2.vet[i];
        }

        return soma;
    }else{
        soma.lenVet = 0;
        return soma;
    }
}

int produtoEscalarListaVetInt(tListaInt v1, tListaInt v2){
    if (v1.lenVet == v2.lenVet){
        int prod = 0; 
        int i;

        for (i = 0; i < v1.lenVet; i++){
            prod += v1.vet[i] * v2.vet[i];
        }

        return prod;
    }else{
        return 0;
    }
}

// FUNÇÕES MODIFICADORAS

tListaInt addElementoListaVetInt(tListaInt v, int elem){
    if (v.lenVet < TAM){
        v.vet[v.lenVet -1] = elem;
        v.lenVet++;
    }
}

tListaInt addElementoListaVetIntIndex(tListaInt v, int elem, int pos){
    if (v.lenVet < TAM){
        if (pos >= 0 && pos < v.lenVet){
            int i;

            for (i = v.lenVet; i > pos; i--){
                v.vet[i] = v.vet[i - 1];
            }

            v.vet[pos] = elem;
            v.lenVet++;

            return v;
        }
    }

    return v;
}


tListaInt delElementoListaVetInt(tListaInt v, int elem){
    int i=0, j;

    while (i < v.lenVet){
        if (v.vet[i] == elem){
            for (j = i; j < v.lenVet - 1; j++){
                v.vet[j] = v.vet[j + 1];
            }
            v.lenVet--;
        }else{
            i++;
        }
    }

    return v;
}

tListaInt ordenarPorMenorListaVetInt(tListaInt v){
    int i, j;
    int auxi, indiceMenor, menorValor;

    for (i=0; i < v.lenVet; i++){

        indiceMenor = i;
        menorValor = v.vet[indiceMenor];

        for (j = i+1; j < v.lenVet; j++){
            if (menorValor > v.vet[j]){
                menorValor = v.vet[j];
                indiceMenor = j;
            }
        }

        v.vet[indiceMenor] = v.vet[i];
        v.vet[i] = menorValor;
    }

    return v;
}

tListaInt ordenarPorBolhaListaVetInt(tListaInt v){
    int trocou=1, i, auxi, ultTroca, guardaTroca;

    ultTroca = v.lenVet - 1;
    while (trocou){
        trocou = 0;

        for (i = 0; i < ultTroca; i++){
            if (v.vet[i] > v.vet[i+1]){
                auxi = v.vet[i];
                v.vet[i] = v.vet[i+1];
                v.vet[i+1] = auxi;
                trocou = 1;
                guardaTroca = i;
            }
        }

        ultTroca = guardaTroca;
    }

    return v;
}
