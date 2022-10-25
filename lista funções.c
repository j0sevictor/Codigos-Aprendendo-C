#include <stdio.h>
#include <math.h>

float tempConvertor(float cent){
	return (cent*9)/5 + 32;
}

int sinalNumero(int n){
	if (n > 0){
		return 1;
	}
	if (n < 0){
		return -1;
	}
	
	return 0;
}

int calcAprovacao(float n1, float n2, float n3){
	float media = (n1 + n2 + n3)/3;
	if (media >= 7){
		return 1;
	}
	return 0;
}

int divisoresNum(int n){
	int i, divisores=1;
	for(i = 1; i < sqrt(n); i++){
		if (!(n%i)){
			divisores++;
		}
	}
	return divisores;
}

int fibonacci(int n){
	if (n < 1){
		return -1;
	}
	
	int termo = 1, anterior = 0;
	int posicao=1;
	
	while (n != posicao){
		termo = termo + anterior;
		anterior = termo - anterior;
		posicao++;
	}
	
	return termo;
}

int potenciaDois(int n){
	if(n == 0){
		return 1;
	}
	return 2 * potenciaDois(n-1);
}

int fibonacciRecur(int n){
	if (n == 0){
		return 0;
	}
	if (n == 1){
		return 1;
	}
	
	return fibonacciRecur(n-1) + fibonacciRecur(n-2);
}

int main() {
	printf("%d", fibonacciRecur(10));
	
	return 0;
}
