#include <stdio.h>

int main(){
	int fat=1, n, i;
	
	scanf("%d", &n);
	
	for(i=2; i <= n; i++){
		fat *= i; 
	}
	
	printf("%d! = %d", n, fat);
	
	return 0;
}
