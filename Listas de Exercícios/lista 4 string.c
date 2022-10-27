#include <stdio.h>

int main(){
    //EXERCÍCIO 1: PREENCHER UM VETOR DE 10 POSIÇÕES E IMPRIMIR O VETOR E SEU MENOR VALOR
/*
    int vet[10], menor;
    int i;
    for(i=0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    menor = vet[0];
    for(i=0; i < 10; i++){
        printf("%d ", vet[i]);
        if (menor > vet[i]){
            menor = vet[i];
        }
    }
    printf("\n%d", menor);
*/
    //EXERCÍCIO 2
/*
    int vet[10], numPar=0, somaPar=0, numImp=0, somaImp=0;
    int i;
    for(i=0; i < 10; i++){
        scanf("%d", &vet[i]);
        if ((vet[i] % 2)){
            numImp++;
            somaImp += vet[i];
        }else{
            numPar++;
            somaPar += vet[i];
        }
    }

    printf("NUMEROS PARES: %d\n", numPar);
    printf("SOMA DE PARES: %d\n", somaPar);
    printf("NUMEROS IMPARES: %d\n", numImp);
    printf("SOMA DE IMPARES: %d\n", somaImp);
*/
    //EXERCÍCIO 5
/*
    char frase[100];
    char carac1, carac2;
    int tamFrase, i=0;

    printf("DIGITE UMA FRASE: ");
    gets(frase);

    printf("DIGITE O PRIMEIRO E O SEGUNDO CARCTERE: ");
    scanf("%c %c", &carac1, &carac2);

    while (frase[i] != '\0'){
        if (frase[i] == carac1){
            frase[i] = carac2;
        }
        i++;
    }

    printf("%s", frase);
*/

    char frase1[100], frase2[100];
    int tam1, tam2, i, j=0;
    
    gets(frase1);
    gets(frase2);

    tam1 = strlen(frase1);
    tam2 = strlen(frase2);

    char concac[tam1 + tam2 + 1];

    for(i=0; i < tam1; i++){
        concac[j] = frase1[i];
        j++;
    }
    concac[j] = ' ';
    j++;
    for(i=0; i < tam2; i++){
        concac[j] = frase2[i];
        j++;
    }
    concac[j] = '\0';

    printf("%s", concac);

    return 0;
}