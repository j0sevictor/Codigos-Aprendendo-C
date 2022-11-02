#include "tListaInt.c"

int eQuad(int n){
    int i=1, var = 0;
    while (i*i <= n){
        if (i*i == n){
            var = 1;
            break;
        }
        i++;
    }

    return var;
}

int main(){
    int i, j;
    int cont = 0;

    for (i = 1; i <= 1000; i++){
        if(i % 2 == 0 || i % 5 == 0 || eQuad(i)){
            cont++;
        }
    }

    printf("%d", cont);

    return 0;
}