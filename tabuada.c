#include <stdio.h>

int main(){

    int base = 1, multiplicador = 1;

    for(int i = 0; i < 10; i++){
        printf("\n======TABUADA DO %d======\n", base);
        for(int j = 0; j < 10; j++){
            printf("%d x %d = %d\n", base, multiplicador, base * multiplicador);
            multiplicador++;
        }
        multiplicador = 1;
        base++;
    }

    return 0;
}
