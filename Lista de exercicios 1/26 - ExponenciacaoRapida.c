#include <stdio.h>

int expoRPD(int base,int exponente);

int main() {
    int base,exponente;
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o exponente: ");
    scanf("%d", &exponente);
    
    int resultado = expoRPD(base,exponente);
    
    printf("%d elevado a %d e %d\n",base,exponente,resultado);
    
    
    
    
    return 0;
}

int expoRPD(int base,int exponente){
    if(exponente == 0){
        return 1;
    }
    
    int meio = expoRPD(base,exponente / 2);
    
   if(exponente % 2 == 0){
       return meio * meio;
       
   }else{
       return base * meio * meio;
   }
}