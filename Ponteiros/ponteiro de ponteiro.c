#include <stdio.h>
#include <stdlib.h>

int** matrizPont(int i, int j){
    int **mat;
    int n;
    
    mat = (int**) malloc(i * sizeof(int*));

    for (n = 0; n < i; i++){
        mat[i] = (int*) malloc(j * sizeof(int));
    }
    
    return mat; 
}

int main(){
    int **mat;

    //DECLARANDO UMA MATRIZ COM PONTEIRO DE PONTEIRO
    mat = (int**) malloc(3*sizeof(int*));
    mat[0] = (int*) malloc(2*sizeof(int));
    mat[1] = (int*) malloc(2*sizeof(int));
    mat[2] = (int*) malloc(2*sizeof(int));

    mat[0][1] = 7;
    *(*(mat + 1) + 2) = 10;

    printf("%d\n", *(*(mat + 0) + 1));
    printf("%d", mat[1][2]); 

    return 0; 
}