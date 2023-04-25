#include <stdio.h>

int main(){
    /*
    int num1, num2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    printf("O Numeros: %d e %d\n", num1, num2);

    if (num1 > num2){
        int x;
        x = num2;
        num2 = num1;
        num1 = x;
    }
    printf("Ordem Crescente: %d e %d\n", num1, num2);
    */

    /*
    int matricula;
    float nota1, nota2, nota3, media;

    printf("Digite sua Matricula:\n");
    scanf("%d", &matricula);

    printf("Digite suas tres notas:\n");
    scanf("%f %f %f", &nota1,&nota2,&nota3);

    media = (nota1+nota2+nota3)/3;

    printf("Media do Aluno %d: %.2f\n", matricula, media);

    if (media < (float) 5){
        printf("Voce esta REPROVADO");
    }else{
        printf("Voce esta APROVADO");
    }
    */

    /*
    int num1, num2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        printf("Os numeros estao  na ordem Decrescente");
    }else{
        if (num1 < num2){
            printf("Os numeros estao em ordem Crescente");
        }else{
            printf("Os numeros sao iguais");
        }
    }
    */

    /*
    int n1, n2, n3;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2){
        if (n1 > n3){
            printf("%d", n1);
        }else{
            printf("%d", n3);
        }
    }else{
        if (n2 > n3){
            printf("%d", n2);
        }else{
            printf("%d", n3);
        }
    }
    */

    int voto;

    printf("Em quem votas? ");
    scanf("%d", &voto);

    switch (voto){

    case 1:
        printf("Votou no Francisco das Foices");
    break;

    case 2:
        printf("Votou na Chica das Marmitas");
    break;

    case 3:
        printf("Votou no Jose dos Picoles");
    break;

    default:
        printf("Anulastes vosso voto");

    }

    return 0;
}
