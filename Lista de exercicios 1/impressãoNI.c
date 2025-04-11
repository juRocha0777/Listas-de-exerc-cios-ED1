#include <stdio.h>

void imprimeImpares(int n);

int main() {
    int limite;
    
    printf("Digite um numero\n");
    scanf("%d", &limite);
        
    printf("Impares de 0 a %d: ", limite);
    imprimeImpares(limite);
    
    printf("\n");
    return 0;
}

void imprimeImpares(int n){
    if(n < 0){
        return;
    }
    
    imprimeImpares(n - 1);
    
   if(n % 2 != 0){
       printf("%d ", n);
   } 
}    