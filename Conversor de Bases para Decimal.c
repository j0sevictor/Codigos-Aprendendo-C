#include <stdio.h>
#include <math.h>
#include <string.h>

int cAsscii(char c){
	int num;
	if(c <= 57){
		num = c - 48;
	}else if(c <= 70 ){
		num = c - 55;
	}

	return num;
}

int binario(int num){
	int numDec=0;
	int resto, i=0;
	
	do{
		resto = num % 10;
		numDec += resto * pow(2, i);
		num = num / 10;
		i++;
	}while(num > 0);
	
	return numDec;
}

int octal(int num){
	int numDec=0;
	int resto, i=0;
	
	do{
		resto = num % 10;
		numDec += resto * pow(8, i);
		num = num / 10;
		i++;
	}while(num > 0);
	
	return numDec;
}

void hexadecimal(){
	char numHex[100];
	int tam_num, valor;
	int numDec=0;
	int resto, i, poten=0;
	
	printf("NUMERO HEXADECIMAL: \n");
	scanf("%s", &numHex);
	tam_num = strlen(numHex);
	
	for(i = tam_num - 1; i >= 0; i--){
		valor = cAsscii(numHex[i]);

		numDec += valor * pow(16, poten);

		poten++;
	}
	
	printf("\n%d", numDec);
}

int main(){
	int base;
	int num;
	
	printf("DIGITE A BASE:\n|1| - BINARIO\n|2| - OCTAL\n|3| - HEXADECIMAL\n");
	scanf("%d", &base);
	
	switch(base){
		case 1:
			printf("DIGITE UM NUMERO BINARIO: ");
			scanf("%d", &num);
			printf("\n%d", binario(num)); 
		break;

		case 2: 
			printf("DIGITE UM NUMERO OCTAL: ");
			scanf("%d", &num);
			printf("\n%d", octal(num)); 
		break;

		case 3: hexadecimal(); break;

		default: printf("OPCAO INVALIDA!");
	}
}
