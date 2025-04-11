#include <stdio.h>

void convertDB(int n);

int main() {
    int num;
    
    printf("Digite um numero para conversao\n");
    scanf("%d",&num);
    
    printf("Binario de %d: ", num);
    if(num == 0){
        printf("0");
    }else{
        convertDB(num);
    }
    
    printf("\n");
    return 0;
}

void convertDB(int n){
    if(n > 0){
       convertDB(n / 2);
   printf("%d",n  %  2);        
    }
}
