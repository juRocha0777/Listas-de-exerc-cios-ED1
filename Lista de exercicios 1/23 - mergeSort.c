#include <stdio.h>

void mergeSort(int arr[],int inicio,int fim);
void Merge(int arr[],int inicio,int meio,int fim);

int main() {
    int arr[] = {3,7,4,5,9,6,8,2,10,1};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr,0,tamanho - 1);
    
    for(int i = 0;i < tamanho;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
    
    return 0;
}

void mergeSort(int arr[],int inicio,int fim){
    if(inicio < fim){
        int meio =(inicio + fim) / 2;
        
        mergeSort(arr,inicio,meio);
        mergeSort(arr,meio + 1,fim);
        
        Merge(arr,inicio,meio,fim);
        
    }
    
}

void Merge(int arr[],int inicio,int meio,int fim){
    int tamanho_esq = meio - inicio + 1;
    int tamanho_dir = fim - meio;
    
    int esq[tamanho_esq];
    int dir[tamanho_dir];
    
    for(int i = 0;i < tamanho_esq; i++){
      esq[i] = arr[inicio + i] ;
    }
    
    for(int j = 0;j < tamanho_dir;j++){
        dir[j] = arr[meio + 1 + j];
    }
    
    int i = 0;
    int j = 0;
    int k = inicio;
    
    while(i < tamanho_esq && j < tamanho_dir){
        if(esq[i] <=dir[j]){
            arr[k] = esq[i];
            i++;
        }else{
            arr[k] = dir[j];
            j++;
        }
            k++;
    }
    
        while(i < tamanho_esq){
        arr[k] = esq[i];
        i++;
        k++;
    }
    
        while(j < tamanho_dir){
        arr[k] = dir[j];
        j++;
        k++;
  }  
    
}