#include <stdio.h>

int main(){
	
	int n, i;
	float altura, maior_alt=-1, menor_alt=9999;
	float media_f=0;
	int num_m=0, dif_mf, total_f=0;
	char sexo;
	float per_f, per_m;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("ALTURA: ");
		scanf("%f", &altura);
		printf("SEXO: ");
		scanf(" %c", &sexo);
		
		if (altura > maior_alt){
			maior_alt = altura;
		}
		
		if (altura < menor_alt){
			menor_alt = altura;
		}
		
		if (sexo == 'f'){
			total_f++;
			media_f += altura;
		}else{
			num_m++;
		}	
	}
	
	printf("\nA MAIOR ALTURA: %.2f", maior_alt);
	printf("\nA MENOR ALTURA: %.2f", menor_alt);
	
	media_f = media_f/total_f;
	
	printf("\nA MEDIA DE ALTURA DAS MULHERES: %.2f", media_f);
	
	printf("\nO NUMERO DE HOMENS: %d", num_m);
	
	per_f = ( (float) total_f / (total_f + num_m)) * 100;
	per_m = ( (float) num_m/(total_f + num_m)) * 100;
	
	printf("\nO PERCENTUAL DE HOMENS: %.0f%%\nO PERCENTUAL DE MULHERES: %.0f%%", per_m, per_f);
	
	
	return 0;
}
