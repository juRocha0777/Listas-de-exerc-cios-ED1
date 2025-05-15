#include <stdio.h>

int Busca(int arr[], int inicio, int fim, int alvo);

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo;
    
    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &alvo);
    
    int resultado = Busca(arr, 0, tamanho - 1, alvo);
    
    if(resultado != -1){
        printf("Elemento encontrado no indice %d\n", resultado);
    }else{
        printf("Elemento nao encontrado.\n");
    }
    
    return 0;
}

int Busca(int arr[], int inicio, int fim, int alvo){
    if(inicio > fim){
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;

    if(arr[meio] == alvo){
        return meio;
    }

    if(arr[meio] < alvo){
        return Busca(arr, meio + 1, fim, alvo);
    }else{
        return Busca(arr, inicio, meio - 1, alvo);
    }
}