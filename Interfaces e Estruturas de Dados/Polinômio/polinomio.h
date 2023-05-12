#include <math.h>
#include <stdlib.h>

typedef struct termo
{
    float coeficiente;
    int expoente;
    struct termo* proximo;
} Termo;

typedef struct
{
    int ordem;
    int termosNaoNulos;
    Termo* primeiro;
    Termo* ultimo;
} Polinomio;

// Protótipos das funçoes

float valorEm(float x, Polinomio* poly);
Polinomio* somaDePolinomios(Polinomio* fx, Polinomio* gx);
int maiorOrdem(Polinomio* fx, Polinomio* gx);
int addTermo(Polinomio* fx, Termo* termo);
void addTermoFinal(Polinomio* fx, Termo* termo);
Termo* somaTermos(Termo* termo1, Termo* termo2);
int ePolinomioNulo(Polinomio* fx);

// Corpo das funções

float valorEm(float x, Polinomio* poly)
{
    Termo* termo = poly->primeiro;
    float valor = 0;
    while (termo != NULL)
    {
        valor += termo->coeficiente * pow(x, termo->expoente);
        termo = termo->proximo;
    }

    return valor;
}

Polinomio* somaDePolinomios(Polinomio* fx, Polinomio* gx)
{
    Polinomio* qx = (Polinomio*) malloc(sizeof(Polinomio));
    qx->ordem = maiorOrdem(fx, gx);
    qx->termosNaoNulos = 0;

    Termo* termoFx = fx->primeiro;
    Termo* termoGx = gx->primeiro;

    while (termoFx != NULL || termoGx != NULL)
    {
        if (termoFx == NULL)
        {
            addTermo(qx, termoGx);
            termoGx = termoGx->proximo;
        }
        else if (termoGx == NULL)
        {
            addTermo(qx, termoFx);
            termoFx = termoFx->proximo;
        }
        else if (termoFx->expoente > termoGx->expoente)
        {
            addTermo(qx, termoFx);
            termoFx = termoFx->proximo;
        }
        else if (termoGx->expoente > termoFx->expoente)
        {
            addTermo(qx, termoGx);
            termoGx = termoGx->proximo;
        }
        else
        {
            addTermo(qx, somaTermos(termoFx, termoGx));
        }
    }

    return qx;
}

Polinomio* ProdutoDePolinomios(Polinomio* fx, Polinomio* gx)
{
    Polinomio* qx = (Polinomio*) malloc(sizeof(Polinomio));
    qx->ordem = maiorOrdem(fx, gx);
    qx->termosNaoNulos = 0;

}

int maiorOrdem(Polinomio* fx, Polinomio* gx)
{
    if (fx->ordem >= gx->ordem)
    {
        return fx->ordem;
    }
    else
    {
        return gx->ordem;
    }
}

int addTermo(Polinomio* fx, Termo* termo)
{
    Termo* novoTermo = (Termo*) malloc(sizeof(Termo));
    if (novoTermo != NULL)
    {
        novoTermo->coeficiente = termo->coeficiente;
        novoTermo->expoente = termo->expoente;
        addTermoFinal(fx, novoTermo);

        return 1;
    }

    return 0;
}

void addTermoFinal(Polinomio* fx, Termo* termo)
{
    termo->proximo = NULL;
    
    if (ePolinomioNulo(fx))
    {
        fx->primeiro = termo;
    }
    else
    {
        fx->ultimo->proximo = termo;
    }

    fx->ultimo = termo;
}

// As operações de soma e produto alteram o valor do coeficiente de termo1
Termo* somaTermos(Termo* termo1, Termo* termo2)
{
    termo1->coeficiente += termo2->coeficiente;
    return termo1;
}

Termo* produtoTermos(Termo* termo1, Termo* termo2)
{
    termo1->coeficiente *= termo2->coeficiente;
    return termo1;
}

int ePolinomioNulo(Polinomio* fx)
{
    return !(fx->termosNaoNulos);
}
