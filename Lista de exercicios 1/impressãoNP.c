#include <stdio.h>

void imprimePares(int n);

int main() {
    int limite;
    
    printf("Digite um numero\n");
    scanf("%d", &limite);
        
    printf("Pares de 0 a %d: ", limite);
    imprimePares(limite);
    
    printf("\n");
    return 0;
}

void imprimePares(int n){
    if(n < 0){
        return;
    }
    
    imprimePares(n - 1);
    
    if(n % 2 == 0){
        printf("%d ",n);
    }
}