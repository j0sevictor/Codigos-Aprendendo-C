#include <stdio.h>
#include <math.h>

int somaDeInteiros(int n){
	if (!n){
		return 0;
	}
	
	return n + somaDeInteiros(n-1); 
}

int eMultiplo(int x, int y){
	if (x % y){
		return 0;
	}else{
		return 1;
	}
}

void multiplosDeNumeros(int n, int a, int b){
	int i=0, variante=0;
	
	while (i < n){
		if (eMultiplo(variante, a) || eMultiplo(variante, b)){
			printf("%d ", variante);
			i++;
		}
		variante++;
	}
}

int eTrianguloRect(int r, int p, int q){
	int aux;
	
	if(r < p){
		aux = r;
		r = p;
		p = aux;
	}
	if (r < q){
		aux = r;
		r = q;
		q = aux;
	}
	
	if (r*r == q*q + p*p){
		return 1;
	}else{
		return 0;
	}

}

void tabuada(int a, int b){
	int i, j;
	for (i=1; i<=a; i++){
		printf("----TABUADA DO %d----\n", i);
		for (j=1; j<=b; j++){
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
}

int ePrimo(int n){
	int i;
	
	if (n == 1){
		return 0;
	}
	if (n == 2){
		return 1;
	}
	if (n % 2 == 0){
		return 0;
	}
	
	for (i=3; i <= sqrt(n); i+=2){
		if (!(n % i)){
			return 0;
		}
	}
	
	return 1;
}

int inversoInt(int n){
	
	int x = n;
	int m = 0; // Vari�vel para receber o inverso de n
	
	while (x){
		m = m * 10 + x % 10;
		x = x / 10;
	}
	
	return m;
}

int mdc(int a, int b){
	while(a != b){
		if(a > b){
			a -= b;
		}else{
			b -= a;
		}
	}
	return a;
}

int main(){
	
	int numero;
	
	printf("%d \n", mdc(24, 24));
	
	scanf("%d", &numero);
	
	if (inversoInt(numero) == numero){
		printf("PALINDROMO");
	}else{
		printf("NAO PALINDROMO");
	}
	
	return 0;
}
