#include <stdio.h>

void subCJTS(int original[],int tamanho,int pos_atual,int subCJT[],int tamanho_sub);

int main() {
    int original[] = {1,2,3,4};
    int tamanho = sizeof(original) / sizeof(original[0]);
    
    int subCJT[tamanho];
    subCJTS(original,tamanho,0,subCJT,0);
    
    
    
    
    return 0;
}

void subCJTS(int original[],int tamanho,int pos_atual,int subCJT[],int tamanho_sub){
    printf("{");
        for(int i = 0;i < tamanho_sub;i++){
            printf("%d ",subCJT[i]);
        }
    printf("}\n");
    
    if(pos_atual == tamanho){
        return;
    }
    
    subCJT[tamanho_sub] = original[pos_atual];
        subCJTS(original ,tamanho,pos_atual + 1,subCJT,tamanho_sub + 1);
            subCJTS(original,tamanho,pos_atual +1,subCJT,tamanho_sub);
    
}