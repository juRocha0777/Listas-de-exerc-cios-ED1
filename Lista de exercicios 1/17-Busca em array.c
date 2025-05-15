#include <stdio.h>

int BuscaArray(int arr[],int alvo,int tamanho,int pos);

int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int alvo;

    int tamanho = sizeof(arr) / sizeof(arr[0]);

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &alvo);

    int resultado = BuscaArray(arr,alvo,tamanho,0);


    if(resultado == 2){
        printf("Valor encontrado\n");
    }else{
    printf("Valor nao encontrado\n");
    }

return 0;
}
int BuscaArray(int arr[],int alvo,int tamanho,int pos){
    if(pos >= tamanho){
        return 1;
    }else if(arr[pos] == alvo){
        return 2;
    }

    return BuscaArray(arr,alvo,tamanho,pos + 1);
}
