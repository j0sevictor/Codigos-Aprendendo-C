#include "tListaInt"

int main(){
    tListaInt lista = initVetInt(7);
    lista = ordenarPorBolhaListaVetInt(lista);
    PrintfListaVetInt(lista);

    return 0;
}