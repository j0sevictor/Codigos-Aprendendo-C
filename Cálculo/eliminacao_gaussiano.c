#include <stdio.h>
#define LINHAS 30
#define COLUNAS 31

void preencherMatriz(float matriz[LINHAS][COLUNAS], int linhas);
void dividirLinha(float matriz[LINHAS][COLUNAS], int linhas, int pivo);
void atualizarLinhas(float matriz[LINHAS][COLUNAS], int linhas, int colunaPivo);
void printMatriz(float matriz[LINHAS][COLUNAS], int linhas);

int main()
{
    float equacoes[LINHAS][COLUNAS];
    int numEquacoes = 0;

    while (numEquacoes < 2 || numEquacoes > 30)
    {
        printf("Digite o numero de equacoes do sistemas: ");
        scanf("%d", &numEquacoes);
    }

    preencherMatriz(equacoes, numEquacoes);

    int i;
    for (i = 0; i < numEquacoes; i++)
    {
        dividirLinha(equacoes, numEquacoes, i);
        atualizarLinhas(equacoes, numEquacoes, i);

        printf("\n");
        printMatriz(equacoes, numEquacoes);
    }

    printMatriz(equacoes, numEquacoes);

    return 0;
}

void dividirLinha(float matriz[LINHAS][COLUNAS], int linhas, int linhaPivo)
{
    int j, colunas = linhas + 1;
    float pivo = matriz[linhaPivo][linhaPivo];
    for (j = 0; j < colunas; j++)
    {
        matriz[linhaPivo][j] = matriz[linhaPivo][j] / pivo;
    }
}

void atualizarLinhas(float matriz[LINHAS][COLUNAS], int linhas, int colunaPivo)
{
    int i, j, colunas = linhas + 1;
    float pivo = matriz[colunaPivo][colunaPivo];
    float coef = 0;
    
    for (i = 0; i < linhas; i++)
    {
        if (i != colunaPivo)
        {
            coef = matriz[i][colunaPivo] / pivo;
            for (j = 0; j < colunas; j++)
            {
                matriz[i][j] = matriz[i][j] - (coef * matriz[colunaPivo][j]); 
            }
        }
    }
}

void preencherMatriz(float matriz[LINHAS][COLUNAS], int linhas)
{
    int colunas = linhas + 1;
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("Valor de (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void printMatriz(float matriz[LINHAS][COLUNAS], int linhas)
{
    int i, j, colunas = linhas + 1;
    for (i = 0; i < linhas; i++)
    {
        printf("| ");
        for (j = 0; j < colunas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("|\n");
    }
}