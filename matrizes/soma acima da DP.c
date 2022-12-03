#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    int i, j;
    int somaAcimaDaDiagonal = 0;

    printf("DIMENSAO DA MATRIZ: ");
    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("VALOR (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < n; i++){
        printf("|");
        for (j = 0; j < n; j++){
            printf(" %d ", matriz[i][j]);
            if (i < j){
                somaAcimaDaDiagonal += matriz[i][j];
            }
        }
        printf("|\n");
    }

    printf("SOMA ACIMA DA DIAGONAL PRINCIPAL: %d \n", somaAcimaDaDiagonal);


    return 0;
}