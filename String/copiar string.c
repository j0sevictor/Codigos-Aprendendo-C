#include <stdio.h>
#include <string.h>
#define INDEX 30

int main(){
	char frase[INDEX];
	int i=1, j=0;
	
	gets(frase);
	
	while (frase[i] != '\0'){
		i++;
	}
	
	char copiaFrase[i];
	for (j=0; j<i; j++){
		copiaFrase[j] = frase[j];
	}
	
	printf("\nFRASE ESCRITA E: %s", copiaFrase);
	
	return 0;
}
