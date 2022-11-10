#include <stdio.h>

int main(){ // PRIMEIRA QUESTAO 
    int pri, sec, i, aux;
    int n;

    printf("DIGITE OS PRIMEIROS TERMOS: ");
    scanf("%d %d", &pri, &sec);

    printf("QUANTOS TERMOS: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        if(i == 0){
            printf("%d ", pri);
        }else if(i == 1){
            printf("%d ", sec);
            aux = pri;
            pri = sec;
            sec = aux;
        }else if(i%2 == 0){
            pri = pri + sec;
            sec = pri - sec;
            printf("%d ", pri);
        }else if(i%2 == 1){
            pri = pri - sec;
            sec = pri + sec;
            printf("%d ", pri);
        }
    }

    return 0;
}