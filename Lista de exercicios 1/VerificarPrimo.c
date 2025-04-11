#include <stdio.h>
#include <stdbool.h>

bool Primo(int n,int divisor);

int main() {
  int num;
  
  printf("Digite um numero para verificar se e primo\n");
  scanf("%d", &num);
  
  if(Primo(num , 2)){
    printf("%d e primo.\n",num);
  }else {
    printf("%d nao e primo",num);
  }
  
  
}

bool Primo(int n,int divisor){
  if(n < 2){
    return false;
  }else if(divisor * divisor > n  ){
    return true;
  } else if(n  %  divisor == 0){
    return false;
  }
  
  return Primo (n, divisor + 1);
}


