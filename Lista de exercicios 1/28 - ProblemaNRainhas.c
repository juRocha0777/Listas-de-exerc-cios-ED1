#include <stdio.h>

#define N 8

int NRainha(int tabuleiro[N][N],int linha);
int posicaoSegura(int tabuleiro[N][N],int linha,int coluna);
void imprimirTabuleiro(int tabuleiro[N][N]);

int main() {
   int tabuleiro[N][N] = {0};

   if(NRainha(tabuleiro,0)){
      printf("Solucao encontrada:\n");
      imprimirTabuleiro(tabuleiro);
   }else{
      printf("Nao ha solucao.\n");
   }

   return 0;
}

int NRainha(int tabuleiro[N][N],int linha){
   if(linha == N){
      return 1;
   }

   for(int coluna = 0;coluna < N;coluna ++){
      if(posicaoSegura(tabuleiro,linha,coluna)){
         tabuleiro[linha][coluna] = 1;

         if(NRainha(tabuleiro,linha + 1)){
            return 1;
         }

         tabuleiro[linha][coluna] = 0;
      }
   }

   return 0;
}

int posicaoSegura(int tabuleiro[N][N],int linha,int coluna){
   for(int i = 0;i < linha;i++){
      if(tabuleiro[i][coluna] == 1){
         return 0;
      }
   }

   for(int i = linha - 1,j = coluna - 1;i >= 0 && j >= 0;i--,j--){
      if(tabuleiro[i][j] == 1){
         return 0;
      }
   }

   for(int i = linha - 1,j = coluna + 1;i >= 0 && j < N;i--,j++){
      if(tabuleiro[i][j] == 1){
         return 0;
      }
   }

   return 1;
}

void imprimirTabuleiro(int tabuleiro[N][N]){
   for(int i = 0;i < N;i++){
      for(int j = 0;j < N;j++){
         printf("%d ",tabuleiro[i][j]);
      }
      printf("\n");
   }
}