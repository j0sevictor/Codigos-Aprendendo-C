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

int estaContidoEm(char *palavra, char *palavra2, int tam1, int tam2){
    int i, j = 0;

    if (tam1 >= tam2){
        lowerCase(palavra, tam1);
        lowerCase(palavra2, tam2);

        for (i = 0; i < tam1; i++){
            if (palavra[i] == palavra2[j]){
                j++;
                if(j == tam2){
                    return 1;
                }
            }else if(palavra2[0] == palavra[i]){
                j = 1;
            }else{
                j = 0;
            }
        }
    }

    return 0;
}

int main(){
    char palavra1[100];
    char palavra2[100];

    printf("DIGITE A PALAVRA 1: \n");
    scanf("%s", palavra1);
    printf("DIGITE A PALAVRA 2: \n");
    scanf("%s", palavra2);

    int contido = estaContidoEm(palavra1, palavra2, strlen(palavra1), strlen(palavra2));

    if (contido){
        printf("ESTA CONTIDO\n");
    }else{
        printf("NAO ESTA CONTIDO\n");
    }

    return 0;
}