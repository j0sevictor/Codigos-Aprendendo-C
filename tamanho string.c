#include <stdio.h>
#include <string.h>
#define INDEX 30

int main(){
	char frase[INDEX];
	int i=0;
	
	gets(frase);
	
	while (frase[i] != '\0'){
		i++;
	}
	
	printf("FRASE TEM TAMANHO %d", i);
	
	return 0;
}
