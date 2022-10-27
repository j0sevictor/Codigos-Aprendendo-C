#include <stdio.h>

int main() {
    int m, n;
	int i, j;
	
	printf("Quais as Dimencoes: ");
	scanf("%d %d", &m, &n);
	
	int a[m][n];
	int maiores[m];


	printf("DIGITE VALORES PARA MATRIZ 'a'\n");
	for(i=0; i < m; i++){
		for(j=0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}

	for(i=0; i < m; i++){
        maiores[i] =  a[i][0];
		for(j=0; j < n; j++){
			
		}
	}

    


    return 0;
}