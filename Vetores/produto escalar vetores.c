#include <stdio.h>

int main() {

    int n, i, produto=0;

    scanf("%d", &n);

    int vet1[n], vet2[n];

    for (i = 0; i < n; i++){
        printf("DIGITE A POSICAO %d DE:\n", i+1);
        printf("Vetor 1:");
        scanf("%d", &vet1[i]);
        printf("Vetor 2:");
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < n; i++){
        produto += vet1[i] * vet2[i];
    }

    printf("PRODUTO ESCALAR: %d", produto);

    return 0;
}