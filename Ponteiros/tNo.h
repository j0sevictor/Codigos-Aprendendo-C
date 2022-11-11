#include <stdlib.h>
#include "tInfo.h"

typedef struct no {
    tInfo info;
    struct no* proximo;
} tNo;

tNo* criaNo(tInfo elem){
    tNo* no;

    no = (tNo*) malloc(sizeof(tNo));

    no->info = elem;
    no->proximo = NULL;

    return no;
}