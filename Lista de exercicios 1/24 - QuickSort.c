#include <stdio.h>

int Part(int arr[],int inicio,int fim);
void quickSort(int arr[],int inicio,int fim);

int main() {
    int arr[] = {3,5,7,2,4,6,1,10,9,8};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr,0,tamanho - 1);
    
        for(int i = 0;i < tamanho;i++){
            printf("%d ",arr[i]);
        }
    
    
    
    return 0;
}

int Part(int arr[],int inicio,int fim){
    int pivo = arr[fim];
    int i = inicio - 1;
    int temp;
    
    for(int j = inicio;j < fim;j++){
        if(arr[j] <= pivo){
            i++;
            
         temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
    
    
      temp = arr[i + 1];
        arr[i + 1] = arr[fim];
        arr[fim] = temp;
    
        return i + 1;
}

void quickSort(int arr[],int inicio,int fim){
    if(inicio < fim){
        int posPivo = Part(arr,inicio,fim);
        
        quickSort(arr,inicio,posPivo - 1);
        quickSort(arr,posPivo + 1,fim);
        
    }
}
