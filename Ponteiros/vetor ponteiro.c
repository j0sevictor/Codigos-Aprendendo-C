#include <stdio.h>

int main(){
    int vet[5];
    int i;

    for(i=0; i < 5; i++){ 
        scanf("%d", (vet + i));
    }

    for(i=0; i < 5; i++){
        printf("%d ", *(vet + i) * 2);
    }

    return 0;
}