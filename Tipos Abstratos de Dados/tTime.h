#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    char nome[50];
    int partidas[10];
    int golsFeitos;
    int golsSofridos;
} tTime;

tTime* initTime(){
    tTime *time = (tTime*) malloc(sizeof(tTime));
    int i;

    printf("\n--------------------------\n");

    printf("DIGITE O CODIGO DO TIME: ");
    scanf("%d", &time->codigo);

    printf("DIGITE O NOME DO TIME: ");
    scanf("%s", time->nome);

    printf("RESULTADOS DAS PARTIDAS: \n");
    for (i = 0; i < 10; i++){
        printf("PARTIDA %d: ", i+1);
        scanf("%d", &time->partidas[i]);
    }

    printf("DIGITE GOLS FEITOS: ");
    scanf("%d", &time->golsFeitos);

    printf("DIGITE GOLS SOFRIDOS: ");
    scanf("%d", &time->golsSofridos);

    return time;
}

tTime** initTimes(int tamanho){
    tTime **times = (tTime**) malloc(tamanho * sizeof(tTime*));

    int i;
    for (i = 0; i < tamanho; i++){
        printf("Time %d", i+1);
        times[i] = initTime();
        system("cls");
    }

    return times;
}

int timePiorDefesa(tTime **times, int tamanho){
    int i;
    int codigoPiorDefesa;
    int goleada = -1;

    for (i = 0; i < tamanho; i++){
        if (times[i]->golsSofridos > goleada){
            goleada = times[i]->golsSofridos;
            codigoPiorDefesa = times[i]->codigo;
        }
    }

    return codigoPiorDefesa;
}

int calcularPontosTime(tTime *time){
    int i;
    int pontos=0, resultado;

    for (i = 0; i < 10; i++){
        resultado = time->partidas[i];

        if (resultado == 1){
            pontos += 3;
        }else if (resultado == 0){
            pontos += 1;
        }
    }

    return pontos;
}

int timeComMaisPontos(tTime **times, int tamanho){
    int i;
    int maiorPontuacao=-1, timeMaisPontuado, pontosTime;

    for (i = 0; i < tamanho; i++){
        pontosTime = calcularPontosTime(times[i]);

        if (pontosTime > maiorPontuacao){
            maiorPontuacao = pontosTime;
            timeMaisPontuado = times[i]->codigo;
        }
    }

    return timeMaisPontuado;
}

int timesComSaldoPositivoNum(tTime **times, int tamanho){
    int i;
    int saldoGols, contador=0;

    for (i = 0; i < tamanho; i++){
        saldoGols = times[i]->golsFeitos - times[i]->golsSofridos;

        if (saldoGols > 0){
            contador++;
        }
    }

    return contador;
}

int* timesComSaldoPositivo(tTime **times, int tamanho){
    int i;
    int saldoGols, contador=-1;
    int *timesSaldoPositivo = (int*) malloc(tamanho*sizeof(int));

    for (i = 0; i < tamanho; i++){
        saldoGols = times[i]->golsFeitos - times[i]->golsSofridos;

        if (saldoGols > 0){
            contador++;
            timesSaldoPositivo[contador] = times[i]->codigo;
        }
    }

    timesSaldoPositivo = (int*) realloc(timesSaldoPositivo, (contador+1)*sizeof(int));

    return timesSaldoPositivo;
}

void timeComTresVitoriasSeguidas(tTime **times, int tamanho){
    int i, j;
    int contador=0;

    for (i = 0; i < tamanho; i++){
        for (j = 0; j < 10; j++){
            if (times[i]->partidas[j] == 1){
                contador++;

                if (contador == 3){
                    printf("%s \n", times[i]->nome);
                    break;
                }
            }else{
                contador = 0;
            }
        }
    }
}