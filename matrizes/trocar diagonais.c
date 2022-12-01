#include <stdio.h>
#include <stdlib.h>


int** criarMatrizDinamica(int i, int j){
    int **mat;
    int n;
    
    mat = (int**) malloc(i * sizeof(int*));

    for (n = 0; n < i; n++){
        mat[n] = (int*) malloc(j * sizeof(int));
    }
    
    return mat;  
}

void printMatrizQuadrada(int** matriz, int dimensao){
    int i, j;

    printf("\n");
    for (i = 0; i < dimensao; i++){
        printf("|");
        for (j = 0; j < dimensao; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("|\n");
    }
}

int main(){
    int dimensao;
    int i, j;
    int auxiliar;

    printf("DIGITE A DIMENCAO DA MATRIZ QUADRADA: ");
    scanf("%d", &dimensao);

    int **matriz = criarMatrizDinamica(dimensao, dimensao);

    for (i = 0; i < dimensao; i++){
        for (j = 0; j < dimensao; j++){
            printf("VALOR (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printMatrizQuadrada(matriz, dimensao);    

    for (i = 0; i < dimensao; i++){
        j = (dimensao-1) - i;
        
        auxiliar = matriz[i][i];
        matriz[i][i] = matriz[i][j];
        matriz[i][j] = auxiliar;
    }

    printMatrizQuadrada(matriz, dimensao);  

    return 0;
}