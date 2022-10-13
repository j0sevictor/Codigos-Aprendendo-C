#include <stdio.h>

int main(){
	int dim_n, dim_m;
	int i, j;
	
	printf("Quais as Dimencoes: ");
	scanf("%d %d", &dim_n, &dim_m);
	
	int a[dim_n][dim_m], aTrans[dim_m][dim_n];
	
	printf("DIGITE VALORES PARA MATRIZ 'a'\n");
	for(i=0; i < dim_n; i++){
		for(j=0; j < dim_m; j++){
			scanf("%d", &a[i][j]);
			aTrans[j][i] = a[i][j];
		}
	}
	
	printf("MATRIZ 'a'\n");
	for(i=0; i < dim_n; i++){
		for(j=0; j < dim_m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("MATRIZ 'a' TRANSPOSTA\n");
	for(i=0; i < dim_m; i++){
		for(j=0; j < dim_n; j++){
			printf("%d ", aTrans[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
