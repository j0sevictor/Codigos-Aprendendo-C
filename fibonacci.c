#include <stdio.h>

int main(){

    int termo = 1, anterior = 0, n;

    printf("Quantos termos de Fibonacci: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d ", termo);
        termo = termo + anterior;
        anterior = termo - anterior;
    }

    return 0;
}
