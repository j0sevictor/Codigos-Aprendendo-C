#include <stdio.h>

int main(){
	int dia, venda, maior_vendas=-1, maior_dia;
	int i;
	
	for(i=1; i<=30; i++){
		scanf("%d", &venda);
		if (venda > maior_vendas){
			maior_vendas = venda;
			maior_dia = i;
		}
	}
	
	printf("O DIA COM MAIOR VENDAS FOI %d ABRIL COM %d VENDAS", maior_dia, maior_vendas);
	
	
	return 0;
}
