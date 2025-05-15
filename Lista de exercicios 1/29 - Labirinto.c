#include <stdio.h>

#define N 4

int resolverLabirinto(int labirinto[N][N],int solucao[N][N],int linha,int coluna);
int posicaoValida(int labirinto[N][N],int linha,int coluna);
void imprimirLabirinto(int solucao[N][N]);

int main() {
   int labirinto[N][N] = {
      {1, 0, 0, 0},
      {1, 1, 0, 1},
      {0, 1, 0, 0},
      {1, 1, 1, 1}
   };

   int solucao[N][N] = {0};

   if(resolverLabirinto(labirinto,solucao,0,0)){
      imprimirLabirinto(solucao);
   }else{
      printf("Nao ha caminho\n");
   }

   return 0;
}

int resolverLabirinto(int labirinto[N][N],int solucao[N][N],int linha,int coluna){
   if(linha == N - 1 && coluna == N - 1){
      solucao[linha][coluna] = 1;
      return 1;
   }

   if(posicaoValida(labirinto,linha,coluna)){
      solucao[linha][coluna] = 1;

      if(resolverLabirinto(labirinto,solucao,linha + 1,coluna)){
         return 1;
      }

      if(resolverLabirinto(labirinto,solucao,linha,coluna + 1)){
         return 1;
      }

      solucao[linha][coluna] = 0;
   }

   return 0;
}

int posicaoValida(int labirinto[N][N],int linha,int coluna){
   return linha >= 0 && linha < N && coluna >= 0 && coluna < N && labirinto[linha][coluna] == 1;
}

void imprimirLabirinto(int solucao[N][N]){
   for(int i = 0;i < N;i++){
      for(int j = 0;j < N;j++){
         printf("%d ",solucao[i][j]);
      }
      printf("\n");
   }
}