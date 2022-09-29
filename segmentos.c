#include <stdio.h>

int main(){
	int n, i;
	int seq, ant, segm=0;
	
	scanf("%d", &n);
	
	for (i=0; i<n ;i++){
		scanf("%d", &seq);
		if (i == 0){
			ant = seq;
		}else if(ant == seq){
			segm++;
		}else if(ant != seq){
			ant = seq;
		}
		
	}
	
	printf("OS SEGMENTOS SAO: %d", segm);
	
	return 0;
}
