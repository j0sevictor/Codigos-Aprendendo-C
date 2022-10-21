#include <stdio.h>

int main(){
    int m, n, i, j;
    
    scanf("%d %d", &m, &n);
    
    int vet[m][n];
    int maiores[m];
    
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d", &vet[i][j]);
        }  
    }
    
    for (i=0; i<m; i++){
        maiores[i] = vet[i][0];
        for (j=1; j<n; j++){
            if(maiores[i] < vet[i][j]){
                maiores[i] = vet[i][j];
            }
        }  
    }
    
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("%d ", vet[i][j]);
        }
        printf("\n");  
    }
    
    for (i=0; i<m; i++){
        printf("%d ", maiores[i]);  
    }
    
    
    
    return 0;
}