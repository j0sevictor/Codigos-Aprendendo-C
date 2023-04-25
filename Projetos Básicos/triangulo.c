#include <stdio.h>

int main(){

    int lado1, lado2, lado3;
    int existe = 0;

    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 > lado2){
        if (lado1 > lado3){
            if (lado1 <= lado2 + lado3){
                existe = 1;
            }
        }else{
            if (lado3 <= lado1 + lado2){
                existe = 1;
            }
        }
    }else{
        if (lado2 > lado3){
            if (lado2 <= lado1 + lado3){
                existe = 1;
            }
        }else{
            if (lado3 <= lado1 + lado2){
                existe = 1;
            }
        }
    }

    if (existe){
        printf("O TRIANGULO EXISTE!");
        if (lado1 == lado2){
            if (lado1 == lado3){
                printf("\nEQUILATERO");
            }else{
                printf("\nISORCELES");
            }
        }else{
            if (lado1 == lado3){
                printf("\nISORCELES");
            }else{
                if (lado2 == lado3){
                    printf("\nISORCELES");
                }else{
                    printf("\nESCALENO");
                }
            }
        }
    }else{
        printf("O TRIANGULO NAO EXISTE!");
    }





    return 0;
}
