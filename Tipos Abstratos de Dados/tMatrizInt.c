#include <stdio.h>
#define MAX_DIM 5

typedef struct {
    int valores[MAX_DIM][MAX_DIM];
    int nL;
    int nC;
} tMatrizInt;

//FUNÇÕES CONSTRUTORAS -----------------------------------------

tMatrizInt initVaziaMatrizInt(){
    tMatrizInt mat;

    mat.nC = 0;
    mat.nL = 0;

    return mat;
}

tMatrizInt initZerosMatrizInt(int l, int c){
    tMatrizInt mat;
    int i, j;

    if (l > MAX_DIM){
        l = MAX_DIM;
    }
    if (c > MAX_DIM){
        c = MAX_DIM;
    }

    mat.nC = c;
    mat.nL = l;

    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            mat.valores[i][j] = 0;
        }
    }

    return mat;
}

tMatrizInt initZerosMatrizInt(int l, int c){
    tMatrizInt mat;
    int i, j;

    if (l > MAX_DIM){
        l = MAX_DIM;
    }
    if (c > MAX_DIM){
        c = MAX_DIM;
    }

    mat.nC = c;
    mat.nL = l;

    for (i = 0; i < l; i++){
        for (j = 0; j < c; j++){
            printf("VALOR DA POSICAO (%d, %d): ", i, j);
            scanf("%d", &mat.valores[i][j]);
        }
    }

    return mat;
}

//FUNÇÕES PRODUTORAS -----------------------------------

int acessoElementoMatrizInt(tMatrizInt m, int l, int c){
    if (l >= 0 && l < m.nL){
        if (c >= 0 && l < m.nC){
            return m.valores[l][c];
        }
    }
    printf("ERRO\n");
    return -999999999;
}

void printfMatrizInt(tMatrizInt m){
    int i, j;

    for (i = 0; i < m.nL; i++){
        printf("|");
        for (j = 0; j < m.nC; j++){
            printf(" %d ", m.valores[i][j]);
        }
        printf("|\n");
    }
}

int somaLinhaMatrizInt(tMatrizInt m, int l){
    int i, soma=0;

    for (i = 0; i < m.nC; i++){
        soma += m.valores[l][i];
    }

    return soma;
}

int somaColunaMatrizInt(tMatrizInt m, int c){
    int i, soma=0;

    for (i = 0; i < m.nL; i++){
        soma += m.valores[i][c];
    }

    return soma;
}

int somaDiagonalPrincipalMatrizInt(tMatrizInt m){
    int i, soma=0;

    for (i = 0; i < m.nL; i++){
        soma += m.valores[i][i];
    }

    return soma;
}

int somaDiagonalSecundariaMatrizInt(tMatrizInt m){
    int i, soma=0;

    for (i = 0; i < m.nL; i++){
        soma += m.valores[i][(m.nC - 1) - i];
    }

    return soma;
}

tMatrizInt produtoInternoMatrizesInt(tMatrizInt m1, tMatrizInt m2){
    tMatrizInt prod;

    if (m1.nC == m2.nL){
        int i, j, k;
        
        prod.nL = m1.nL;
        prod.nC = m2.nC;

        for (i = 0; i < prod.nL; i++){
            for (j = 0; j < prod.nC; j++){
                prod.valores[i][j] = 0;
                for (k = 0; k < m1.nC; k++){
                    prod.valores[i][j] += m1.valores[i][k] * m2.valores[k][j]; 
                }
            }
        }
    }else{
        prod = initVaziaMatrizInt();
    }

    return prod;
}

//FUNÇÕES MODIFIICADORAS -------------------------------

tMatrizInt atualizacaoMatrizInt(tMatrizInt m, int l, int c, int elem){
    if (l >= 0 && l < m.nL){
        if (c >= 0 && c < m.nC){
            m.valores[l][c] = elem;
        }
    }

    return m;
}
