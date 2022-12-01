#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lowerCase(char *palavra, int tam){
    int i;

    for (i = 0; i < tam; i++){
        if (palavra[i] >= 65 && palavra[i] <= 90){
            palavra[i] = palavra[i] + 32;
        }
    }
}

int ePalindromo(char *palavra, int tam){
    int i;

    lowerCase(palavra, tam);

    for (i = 0; i < tam; i++){
        if (i == (tam - 1) - i){
            break;
        }
        if (palavra[i] != palavra[(tam - 1) - i]){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n, m;
    int i, j; 

    printf("DIGITE linhas e colunas: \n");
    scanf("%d %d", &n, &m);

    char matriz[n][m];

    for (i = 0; i < n; i++){
        printf("PALAVRA %d: ", i+1);
        scanf("%s", matriz[i]);
    }

    printf("\n");
    for (i = 0; i < n; i++){
        if (ePalindromo(matriz[i], strlen(matriz[i]))){
            printf("%s - (%d, 0) - (%d, %d)\n", matriz[i], i, i, strlen(matriz[i]) - 1);
        }
    }

    return 0;
}