#include <stdio.h>

int dobroDois(int* a, int* b){
    *a = *a * 2;
    *b = *b * 2;

    return *a + *b;
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    int x = dobroDois(&a, &b);

    printf("VALOR DE a: %d\nVALOR DE b: %d\nDOBRO DA SOMA: %d", a, b, x);

    return 0;
}