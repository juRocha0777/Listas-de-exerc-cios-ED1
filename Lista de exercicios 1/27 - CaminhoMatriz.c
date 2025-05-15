#include <stdio.h>

#define LIN 4
#define COL 4

int caminho(int matriz[LIN][COL],int lin,int col,int linha,int coluna);

int main() {
    int mapa[4][4] = {
   {1, 1, 0, 1},
   {0, 1, 1, 0},
   {1, 1, 0, 1},
   {0, 1, 1, 1}
};
    
   int resultado = caminho(mapa,4,4,0,0);
    
    if(resultado > 0){
        printf("Existe um caminho\n");
    }else{
        printf("Nao existe caminho\n");
    }
    
    int total = caminho(mapa,LIN,COL,0,0);
    
    printf("Total de caminhos possiveis:%d\n",total);
    
    return 0;
}

int caminho(int matriz[LIN][COL],int lin,int col,int linha,int coluna){
    if(linha == lin - 1 && coluna == col - 1){
        return 1;
    }
    
    if(linha >= lin || coluna >= col || matriz[linha][coluna] == 0){
        return 0;
    }
    
    
        return caminho(matriz,lin,col,linha + 1,coluna) + caminho(matriz,lin,col,linha,coluna + 1);
    
}