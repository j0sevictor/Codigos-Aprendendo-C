#include <stdio.h>
#include <math.h>

int main(){

/* //EXERCÍCIO 1
    int numero;

    printf("DIGITE UM NUMERO: ");
    scanf("%d", &numero);

    printf("O NUMERO E: %d", numero);
*/

/*  //EXERCÍCIO 2
    int numero1, numero2;

    printf("DIGITE DOIS NUMEROS:\n");
    scanf("%d %d", &numero1, &numero2);

    numero1 = numero1 * numero2;

    printf("A MULTIPLICACAO DELES E: %d", numero1);
*/

/* //EXERCÍCIO 3
    float metros, centimetros;

    printf("DIGITE UM VALOR EM METROS: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("%f M em centimetros e: %f", metros, centimetros);
*/

/*  //EXERCÍCIO 4
    float raio, area;

    printf("DIGITE UM RAIO DE CIRCULO: ");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A AREA DO CIRCULO E: %f", area);
*/

/*  //EXERCÍCIO 5
    float horas, dinheiro_horas, dinheiro_total;

    printf("QUANTAS HORAS TRABALHADAS NO MES: ");
    scanf("%f", &horas);
    printf("QUANTO GANNHA POR HORA TRABALHADA: ");
    scanf("%f", &dinheiro_horas);

    dinheiro_total = horas * dinheiro_horas;

    printf("GANHOU NO TOTAL: R$ %f", dinheiro_total);
*/

/*  //EXECÍCIO 6
    int votos_nulos, votos_brancos, votos_validos, total_votos;
    float percentual;

    printf("DIGITE O NUMERO DE VOTOS VALIDOS: ");
    scanf("%d", &votos_validos);

    printf("DIGITE O NUMERO DE VOTOS NULOS: ");
    scanf("%d", &votos_nulos);

    printf("DIGITE O NUMERO DE VOTOS BRANCOS: ");
    scanf("%d", &votos_brancos);

    total_votos = votos_validos + votos_nulos + votos_brancos;

    percentual = ((float) votos_validos / total_votos) * 100;
    printf("\nOS VOTOS VALIDOS REPRESENTAM: %.1f%%\n", percentual);

    percentual = ((float) votos_nulos / total_votos)  * 100;
    printf("OS VOTOS NULOS REPRESENTAM: %.1f%%\n", percentual);

    percentual = ((float) votos_brancos / total_votos)  * 100;
    printf("OS VOTOS BRANCOS REPRESENTAM: %.1f%%\n", percentual);
*/

/*  Exercício 7
    float percorrido, divida;
    int dias;

    printf("QUAL A KILOMETRAGEM PERCORRIDA: ");
    scanf("%f", &percorrido);
    printf("QUANTOS DIAS O CARRO FICOU ALUGADO: ");
    scanf("%d", &dias);

    divida = (60 * dias) + (0.15 * percorrido);

    printf("\nSUA DIVIDA E DE: R$ %.2f", divida);
*/

    //EXERCÍCIO 8
    float salario, imp_sindical, imp_renda, sal_liquido;

    printf("QUANTO GANHA POR MES: ");
    scanf("%f", &salario);

    imp_sindical = salario * .05;
    imp_renda = salario * .08;
    sal_liquido = (salario - imp_sindical) - imp_renda;

    printf("\nSEU SALARIO LIQUIDO E: R$ %.1f", sal_liquido);
    printf("\nPAGOU: R$ %.1f EM IMPOSTO SINDICAL", imp_sindical);
    printf("\nPAGOU: R$ %.1f EM IMPOSTO DE RENDA", imp_renda);

    return 0;
}
