#include <stdio.h>

int main(){
	int a, b, i;
	int multi=0, soma_par=0, quant_num=0;
	float media;
	
	while(1){
		scanf("%d %d", &a, &b);
		
		if (b >= a){
			printf("ERRO, A deve ser maior que B!");
		}else{
			break;
		}
	}
	
	for(i = b; i <= a; i++){
		if (!(i % 3)){
			multi++;
		}
		if (!(i % 2)){
			soma_par += i;
		}
		media += i;
		quant_num++;
	}
	
	printf("\nMULTIPLOS DE 3: %d", multi);
	printf("\nA SOMA PAR: %d", soma_par);
	printf("\nA MEDIA: %.2f", (float) media / quant_num);
	
	return 0;
}
