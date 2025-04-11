#include <stdio.h>

int arrayER(int arr[],int tamanho,int indice);

int main() {
    int numeros[] = {1,2,3,4,5,6,7};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    int soma = arrayER(numeros,tamanho,0);
    
    printf("Soma dos elementos: %d\n");
    
    
    return 0;
}

int arrayER(int arr[],int tamanho,int indice){
    if(indice >= tamanho){
        return 0;
    }
    return arr[indice] + arrayER(arr,tamanho,indice + 1);
}