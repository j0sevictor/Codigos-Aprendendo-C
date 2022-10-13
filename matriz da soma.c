#include <stdio.h>

int main(){
	int dim_n;
	int i, j;
	
	printf("Quais as Dimencoes: ");
	scanf("%d", &dim_n);
	
	int a[dim_n][dim_n], b[dim_n][dim_n], c[dim_n][dim_n];
	
	printf("DIGITE VALORES PARA MATRIZ 'a'\n");
	for(i=0; i < dim_n; i++){
		for(j=0; j < dim_n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("DIGITE VALORES PARA MATRIZ 'b'\n");
	for(i=0; i < dim_n; i++){
		for(j=0; j < dim_n; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("MATRIZ 'c'\n");
	for(i=0; i < dim_n; i++){
		for(j=0; j < dim_n; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
