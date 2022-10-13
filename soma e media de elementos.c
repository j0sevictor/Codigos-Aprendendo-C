#include <stdio.h>

int main(){
	int i, j;
	int mat[4][4];
	int somaColImp=0, somaColPar=0, numColPar=0;
	
	printf("DIGITE VALORES PARA MATRIZ 'a'\n");
	for(i=0; i < 4; i++){
		for(j=0; j < 4; j++){
			scanf("%d", &mat[i][j]);
			if (j%2){
				somaColImp += mat[i][j];
			}else{
				somaColPar += mat[i][j];
				numColPar++;
			}
		}
	}
	
	for(i=0; i < 4; i++){
		for(j=0; j < 4; j++){
			printf("%d ", mat[i][j]);
		}
	}
	
	printf("SOMA DOS ELEMENTOS DAS COLUNAS IMPARES: %d\n", somaColImp);
	printf("MEDIA DOS ELEMENTOS DAS COLUNAS PARES: %.2f\n", (float) somaColPar / numColPar);

	
	return 0;
}
