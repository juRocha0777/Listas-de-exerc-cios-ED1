#include <stdio.h>


int mdc(int a,int b);

int main(){
int num1,num2;

printf("Digite dois numeros\n");
scanf("%d %d",&num1, &num2);

printf("MDC de %d e %d e: %d\n", num1,num2,mdc(num1,num2));


return 0;
}


int mdc(int a,int b){
    if(b == 0)
        return a;
            return mdc(b,a%b);

 }
