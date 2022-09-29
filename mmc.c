#include <stdio.h>

int main(){
	int a, b, mdc, mmc;
	int i;
	
	scanf("%d %d", &a, &b);
	
	if (a > b){
		for (i=1; i <= b; i++){
			if (a % i == 0 && b % i == 0){
				mdc = i;
			}
		}
	}else{
		for(i=1; i <= a; i++){
			if (a % i == 0 && b % i == 0){
				mdc = i;
			}
		}	
	}
	
	mmc = (a * b) / mdc;
	
	printf("O MMC DE %d e %d: %d", a, b, mmc);
	
	return 0;
}
