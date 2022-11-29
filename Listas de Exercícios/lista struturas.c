#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[100];
    float tempC;
    float tempF;
} tCidade;

float conversorTemp(float c){
    return 9*c/5 + 32;
}

tCidade* initCidade(int codigo, char *nome, float cTemp){
    tCidade *cit = (tCidade*) malloc(sizeof(tCidade));

    cit->codigo = codigo;
    strcpy(cit->nome, nome);
    cit->tempC = cTemp;
    cit->tempF = conversorTemp(cTemp);

    return cit;
}

void printCidades(tCidade* cidades[], int tam){
    int i;
    for (i = 0; i < tam; i++){
        printf("----------------------\n");
        printf("CODIGO: %d \n", cidades[i]->codigo);
        printf("NOME: %s \n", cidades[i]->nome);
        printf("TEMPERATURA C: %f \n", cidades[i]->tempC);
        printf("TEMPERATURA F: %f \n", cidades[i]->tempF);
        printf("----------------------\n");
    }
}

tCidade* acharCidaddePorCodigo(int codigo, tCidade* cidades[], int tam){
    int i;

    for (i = 0; i < tam; i++){
        if (cidades[i]->codigo == codigo){
            return cidades[i];
        }
    }

    return NULL;
}

void alteraTemperatura(tCidade* cit, float celc){
    cit->tempC += celc;
    cit->tempF = conversorTemp(cit->tempC);
}

int main(){
    tCidade* cidades[3];
    int op, cod;

    cidades[0] = initCidade(100, "Mauriti", 31);
    cidades[1] = initCidade(234, "Juazeiro", 28);
    cidades[2] = initCidade(421, "Cidade", 2);

    do{
        printf("ESCOLHA UMA OPCAO\n|1| - MOSTRAR CIDADES\n|2| - ALTERAR TEMPERATURA\n|0| - SAIR\n");
        scanf("%d", &op);

        switch (op){
            case 1: 
                system("cls");
                printCidades(cidades, 3); 
            break;
            case 2: 
                printf("QUAL O CODIGO DA CIDADE: ");
                scanf("%d", &cod);

                tCidade* cit = acharCidaddePorCodigo(cod, cidades, 3);

                if (cit != NULL){
                    float temp;
                    printf("INCREMENTO: ");
                    scanf("%f", &temp);

                    alteraTemperatura(cit, temp);

                    printf("OPERACAO REALIZADA");
                    system("pause");
                    system("cls");
                }
                
            break; 
            case 0: break;
            default: printf("INVALIDO\n"); break;
        }

    }while (op != 0);


}