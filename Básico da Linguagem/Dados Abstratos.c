#include <stdio.h>
#include <math.h>
// PONTO-------------------------------
typedef struct {
    int x;
    int y;
} tPonto;

tPonto initPontoOrigem(){
    tPonto p;
    
    p.x = 0;
    p.y = 0;

    return p;
}

tPonto initPontoCoordenadas(){
    tPonto p;
    int a, b;

    printf("Entre com as Coordenadas do Ponto: \n");
    scanf("%d %d", &a, &b);
    p.x = a;
    p.y = b;

    return p;
}

void pontoCoordenadasPrint(tPonto p){
    printf("(%d, %d)", p.x, p.y);
}

tPonto pontoSetAbss(tPonto p, int novo_x){
    p.x = novo_x;

    return p;
}

tPonto pontoSetOrde(tPonto p, int novo_y){
    p.y = novo_y;

    return p;
}

int pontoGetAbss(tPonto p){
    return p.x;
}

int pontoGetOrde(tPonto p){
    return p.y;
}

tPonto pontoMover(tPonto p, int dx, int dy){
    p.x += dx;
    p.y += dy;

    return p;
}

float distanciaPontos(tPonto p, tPonto h){
    float dist;

    dist = sqrt(pow((h.x - p.x), 2) + pow((h.y - p.y), 2));

    return dist;
}

int pontoQuadrante(tPonto p){

    if (p.x > 0 && p.y > 0){
        return 1;
    }
    if (p.x < 0 && p.y > 0){
        return 2;
    }
    if (p.x < 0 && p.y < 0){
        return 3;
    }
    if (p.x > 0 && p.y < 0){
        return 4;
    }

    return 0;
}

tPonto pontoSimetrico(tPonto p){
    p.x = -p.x;
    p.y = -p.y;

    return p;
}

// RETA------------------------------
typedef struct {
    tPonto inicio;
    tPonto fim;
} tReta;

tReta initReta(tPonto i, tPonto f){
    tReta r;

    r.inicio = i;
    r.fim = f;

    return r;
}

tReta initRetaInput(){
    tPonto i, f;
    tReta r;

    printf("Entre com o Ponto de Inicio: \n");
    i = initPontoCoordenadas();
    printf("Entre com o Ponto de Fim: \n");
    f = initPontoCoordenadas();

    r = initReta(i, f);

    return r;
}

void retaPontos(tReta r){
    printf("Inicio: (%d, %d)\nFim: (%d, %d)", r.inicio.x, r.inicio.y, r.fim.x, r.fim.y);
}

tPonto retaGetInicio(tReta r){
    return r.inicio;
}

tPonto retaGetFim(tReta r){
    return r.fim;
}

tReta retaMover(tReta r, int dx, int dy){
    r.inicio = pontoMover(r.inicio, dx, dy);
    r.fim = pontoMover(r.fim, dx, dy);

    return r;
}

float retaTamanho(tReta r){
    return distanciaPontos(r.inicio, r.fim);
}

int main(){
    /*
        Ler uma reta e um Ponto, e determinar se o ponto está mais próximo
        do inicio ou do final da reta.
    
    */

    tPonto ponto;
    tReta reta;
    float dis_inicio, dis_fim;

    ponto = initPontoCoordenadas();
    reta = initRetaInput();

    dis_inicio = distanciaPontos(ponto, reta.inicio);
    dis_fim = distanciaPontos(ponto, reta.fim); 

    if (dis_inicio == dis_fim){
        printf("O Ponto está Equidistante");
    }else if (dis_inicio < dis_fim){
        printf("O Pontos esta mais perto do Inicio da Reta");
    }else{
        printf("O Ponto esta mais perto de fim da Reta");
    }

    return 0;
}