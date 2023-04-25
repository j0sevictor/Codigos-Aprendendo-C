#include <stdio.h>
#include <math.h>
#include <string.h>

//CALCULAR POTÊNCIAS DE 10
int pt(int i){
	if (i==0){
		return 1;
	}
	return 10 * pt(i-1);
}

void binario(int n){
	int i=0;
	char numBin[100];
	
	do{
		if (n % 2 == 0){
			numBin[i] = '0';
		}else{
			numBin[i] = '1';	
		}
		i++;
		n = n/2;
	}while(n > 0);
	numBin[i] = '\0';
	
	for(i = strlen(numBin) - 1; i >= 0; i--){
		printf("%c", numBin[i]);
	}
}

void octal(int n){
	int i=0, numO=0, resto;
	
	do{
		resto = n % 8;
		numO += resto * pt(i); 
		n = n/8;
		i++;
	}while(n > 0);
	
	printf("\n%d", numO);
}

void hexadecimal(int n){
	int i=0, resto;
	char numH[100];
	
	do{
		if (n >= 16){
			resto = n % 16;
		}else{
			resto = n;
		}

		if (resto <= 9){
			numH[i] = resto + '0';
		}else{
			if(resto == 10){
				numH[i] = 'A';
			}else if(resto == 11){
				numH[i] = 'B';
			}else if(resto == 12){
				numH[i] = 'C';
			}else if(resto == 13){
				numH[i] = 'D';
			}else if(resto == 14){
				numH[i] = 'E';
			}else if(resto == 15){
				numH[i] = 'F';
			}
		}

		i++;
		n = n/16;
	}while(n > 0);
	numH[i] = '\0';

	for(i = (strlen(numH) - 1); i >= 0; i--){
		printf("%c", numH[i]);
	}
}


int main(){
	int num;
	int base;
	
	printf("DIGITE O NUMERO DECIMAL: ");
	scanf("%d", &num);
	
	printf("\nDIGITE A BASE:\n|1| - BINARIO\n|2| - OCTAL\n|3| - HEXADECIMAL\n");
	scanf("%d", &base);
	
	switch(base){
		case 1: binario(num); break;
		case 2: octal(num); break;
		case 3: hexadecimal(num); break;
		default: printf("OPCAO INVALIDA!");
	}
}
