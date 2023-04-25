#include <stdio.h>

int main(){
	int num, i, soma=0;
	
	for(i=1; i<=10; i++){
		scanf("%d", &num);
		if (num > 40){
			soma += num;
		}
	}
	
	printf("SOMA DOS NUMEROS > 40: %d", soma);
	
	return 0;
}
