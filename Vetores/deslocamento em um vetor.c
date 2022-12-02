#include <stdio.h>
#include <stdlib.h>

int deslocaVet(int tamanho, int vetor[], char direcao){
    if(direcao == 'd'){                 // DESLOCA O VETOR EM 1 POSICAO PARA A DIREITA
        int aux = vetor[tamanho - 1];
        int i;
        for(i = tamanho - 1; i > 0; i--){  
            vetor[i] = vetor[i - 1];
        }
        vetor[0] = aux;
    }else if(direcao == 'e'){           // DESLOCA O VETOR EM 1 POSICAO PARA A ESQUERDA
        int aux = vetor[0];
        int i;
        for(i = 0; i < tamanho - 1; i++){  
            vetor[i] = vetor[i + 1];
        }
        vetor[tamanho - 1] = aux;
    }

    return 0;
}

int main(){
    int tamanho, i, vDesl;
    char direcao;

    printf("Digite o tamanho do vetor... \n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(i = 0; i < tamanho; i++){
        printf("Digite o valor do indice %d do vetor... \n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor para deslocamento... \n");
    scanf("%d", &vDesl);

    printf("Digite a direcao do deslocamento: [e/d]... \n");
    scanf(" %c", &direcao);

    for(i = 0; i < tamanho; i++){
        printf("[%d]", vetor[i]);
    }

    printf("\n");

    for(i = 0; i < vDesl; i++){             // DESLOCA O VETOR EM X POSICOES PARA A DIRECAO ESCOLHIDA
        deslocaVet(tamanho, vetor, direcao);
    }

    for(i = 0; i < tamanho; i++){           // IMPRIME O VETOR DESLOCADO
        printf("[%d]", vetor[i]);
    }

return 0;
}