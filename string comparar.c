#include <stdio.h>
#include <string.h>
#define INDEX 30

int main(){
	char frase1[INDEX];
	char frase2[INDEX];
	int i=0, igual=1;
	
	gets(frase1);
	gets(frase2);
	
	if (strlen(frase1) == strlen(frase2)){
		while (frase1[i] != '\0' && frase2[i] != '\0'){
			if (frase1[i] != frase2[i]){
				igual = 0;
				break;
			}
			i++;
		}
	}else{
		igual = 0;
	}
	
	
	if (igual){
		printf("FRASES IGUAIS");
	}else{
		printf("FRASES DIFERENTES");
	}
	
	return 0;
}
