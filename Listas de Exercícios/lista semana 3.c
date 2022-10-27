#include <stdio.h>
#include <math.h>

int main(){

/*  //Exercício 1
    int numero, primo = 0;

    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++){
        if (!(numero % i)){
            printf("%d DIVIDE %d\n", i, numero);
            primo++;
        }
    }

    if (primo == 2){
        printf("\n%d E PRIMO\n", numero);
    }
*/

/*  //Exercício 2
    int n, sinal = 1, termo = 1;
    float s = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if (sinal){
            s += termo / pow(termo, 2);
            sinal = 0;
        }else{
            s -= termo / pow(termo, 2);
            sinal = 1;
        }
        termo++;
    }
    printf("%f", s);
*/

/*  //Exercício 3
    int a, b, result = 0;

    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++){
        result += a;
    }

    printf("%d * %d = %d", a, b, result);
*/

/*  //Exercício 4
    int numero, triangulo, i = 1;

    scanf("%d", &numero);

    while (1){
        triangulo = i * (i+1) * (i+2);

        if (triangulo == numero){
            printf("%d TRIANGULAR\n", numero);
            break;
        }else if (triangulo > numero){
            printf("%d NAO TRIANGULAR\n", numero);
            break;
        }

        i++;
    }
*/

/*  //Exercício 5
    int numero, primo = 1;

    scanf("%d", &numero);

    for (int i = 2; i < numero; i++){
        if (!(numero % i)){
            primo = 0;
        }
    }
    if (primo){
        printf("\n%d E PRIMO\n", numero);
    }else{
        printf("\n%d E COMPOSTO\n", numero);
    }
*/

/*  //Exercício 6
    float notas, media = 0;

    for(int i = 1; i <= 3; i++){
        while (1){
            printf("DIGITE NOTA %d:", i);
            scanf("%f", &notas);
            if (notas >= 0 && notas <= 10){
                media += notas;
                break;
            }else{
                printf("ERRO! TENTE NOVAMENTE");
            }
        }
    }

    printf("\nA MEDIA DO ALUNO E: %.2f", media/3);
*/

/*  //Exercício 7
    int numero, maior, menor;
    int i;

    printf("Numero 1:");
    scanf("%d", &numero);
    menor = numero;
    maior = numero;

    for(i = 2; i <= 10; i++){
        printf("Numero %d:", i);
        scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }
        if (numero < menor){
            menor = numero;
        }
    }

    printf("\nO MAIOR E: %d", maior);
    printf("\nO MENOR E: %d", menor);
*/

    int n, i;
    int termo = 1, anterior = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("%d ", termo);
        termo = termo + anterior;
        anterior = termo - anterior;
    }


    return 0;
}
