#include <stdio.h>

int main(){
	
	int n, i, j, auxi;
	
	scanf("%d", &n);
	
	int numeros[n];
	
	for(i=0; i<n; i++){
		scanf("%d", &numeros[i]);
	}
	
	i=0;
	do{	
		for(j=(i+1); j<n; j++){
			if (numeros[i] > numeros[j]){
				auxi = numeros[j];
				numeros[j] = numeros[i];
				numeros[i] = auxi;
			}
		}
		i++;
	}while(i < n);
	
	for(i=0; i<n; i++){
		printf("%d ", numeros[i]);
	}
	
	return 0;
}
