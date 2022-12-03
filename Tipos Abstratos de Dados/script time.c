#include "tTime.h"

int main(){
    tTime** times = initTimes(4);

    printf("PIOR DEFESA %d", timePiorDefesa(times, 4));


    return 0;
}