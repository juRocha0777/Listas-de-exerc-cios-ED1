#include <stdio.h>

void hanoi(int n,char origem,char auxiliar,char destino);

int main(){
int n;
    
    printf("Digite o numero de discos ");
   scanf("%d", &n);
    
    hanoi(n,'A','B','C');

return 0;
}

void hanoi(int n,char origem,char auxiliar,char destino){
    if(n == 1){
            printf("Mover disco 1 de %c para %c\n",origem,destino);
    }else{
            hanoi(n - 1, origem,auxiliar,destino);
            printf("Mover disco %d de %c para %c\n",n,origem,destino);
            hanoi(n - 1,auxiliar,origem,destino);
    }
}