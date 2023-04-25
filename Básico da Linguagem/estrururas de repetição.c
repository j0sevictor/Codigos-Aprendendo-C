#include <stdio.h>

int main(){
/*
    int n, valor = 1, contador = 1;

    printf("DIGITE QUANTOS IMPARES QUERES: ");
    scanf("%d", &n);

    while (contador <= n){

        printf("%d ", valor);
        valor += 2;

        contador++;
    }
*/

/*
    int numero, maior, menor, somatorio, contador = 0;
    float media;

    printf("DIGITE UM NUMERO: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;

    while (numero >= 0){

        if (maior < numero){
            maior = numero;
        }
        if (menor > numero){
            menor = numero;
        }
        somatorio += numero;
        contador++;

        printf("DIGITE OUTRO NUMERO: ");
        scanf("%d", &numero);
    }

    if (contador){
        media = (float) somatorio / contador;
        printf("\nO MAIOR NUMERO FOI: %d\n", maior);
        printf("O MENOR NUMERO FOI: %d\n", menor);
        printf("A MEDIA FOI: %.2f\n", media);
    }
*/

/*
    int voto, confirma;

    do{
        printf("-URNA ELETRONICA- EM QUEM VOTAS?");
        scanf("%d", &voto);

        switch (voto){
            case 1:
                printf("CANDIDATO Francisco das Foices");
            break;

            case 2:
                printf("CANDIDATO Chica das Marmitas");
            break;

            case 3:
                printf("CANDIDATO Jose dos Picoles");
            break;

            default:
                printf("Anulas vosso voto?");
        }

        printf("\nSE CONFIRMA O VOTO DIGITE [1] SE NAO [0]: ");
        scanf("%d", &confirma);

    }while (!confirma);

    printf("\nVOTOU!");
*/

/*
    float termo, razao;
    int quantidade;

    printf("RAZAO, PRIMEIRO TERMO E QUANTIDADE: ");
    scanf("%f %f %d", &razao, &termo, &quantidade);

    for (int i = 0; i < quantidade; i++){
        printf("%f ", termo);
        termo = termo * razao;
    }
*/

    float base, resultado = 1;
    int exp;

    printf("DIGITE A BASE E O EXPOENTE: ");
    scanf("%f %d", &base, &exp);


    for (int i = 0; i < exp; i++){
        resultado = resultado * base;
    }
    printf("%f", resultado);


    return 0;
}
