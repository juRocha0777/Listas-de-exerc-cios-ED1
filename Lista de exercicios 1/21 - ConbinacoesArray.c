#include <stdio.h>

void conbinar(int original,int totalEts,int tamanho,int pos_result,int resultPCL[],int pos_atual);

int main() {
    int original[] = {1,2,3,4};
    int tamanho_total = sizeof(original) / sizeof(original[0]);
    int tamanho = 2;
    
    int resultPCL[tamanho];
    
    conbinar(original, tamanho_total, tamanho, 0, resultPCL, 0);
    
    
    
    return 0;
}

void conbinar(int original[],int totalEts,int tamanho,int pos_result,int resultPCL[],int pos_atual){
    if(pos_result == tamanho){
        for(int j =0;j < tamanho;j++){
            printf("%d ",resultPCL[j]);
        }
        printf("\n");
        return;
        
    }
    
    for(int j = pos_atual;j < totalEts;j++){
        resultPCL[pos_result] = original[j];
        
        conbinar(original,totalEts,tamanho,pos_result + 1,resultPCL,j + 1);
    }
    
    
}