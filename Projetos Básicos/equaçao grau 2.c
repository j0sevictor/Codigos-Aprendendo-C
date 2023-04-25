#include <stdio.h>
#include <math.h>

int main(){

    float coA, coB, coC;
    float raiz1, raiz2, delta;


    printf("\n--- RESOLVO EQUACOES DO TIPO: AX^2 + BX + C ---\n");

    printf("QUAL O COEFICENTE 'A': ");
    scanf("%f", &coA);
    printf("QUAL O COEFICENTE 'B': ");
    scanf("%f", &coB);
    printf("QUAL O COEFICENTE 'C': ");
    scanf("%f", &coC);

    delta = pow(coB, 2) - (4 * coA * coC);

    if (delta > 0){
        printf("\nA EQUACAO %fX^2 + %fX + %f TEM DUAS RAIZES REAIS", coA, coB, coC);
        raiz1 = ((-coB) + sqrt(delta)) / (2 * coA);
        raiz2 = ((-coB) - sqrt(delta)) / (2 * coA);
        printf("\nX1 = %f\nX2 = %f", raiz1, raiz2);
    }else if(delta == 0){
        printf("\nA EQUACAO %fX^2 + %fX + %f TEM UMA RAIZ REAL", coA, coB, coC);
        raiz1 = (-coB) / (2 * coA);
        printf("\nX1 = %f", raiz1);
    }else{
        printf("\nA EQUACAO %fX^2 + %fX + %f NAO TEM RAIZES REAIS", coA, coB, coC);
    }

    return 0;
}
