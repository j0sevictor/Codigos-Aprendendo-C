#include <stdio.h>

int main(){
    int d = 4;
    int *p;

    p = &d;

    printf("%p\n%p", &d,  p);
    
    printf("\n %d ", sizeof(long));

    return 0;
}