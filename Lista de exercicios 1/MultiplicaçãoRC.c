#include <stdio.h>

int muliRec(int a, int b);


int main() {
   int a , b ,resultado;
			   
			   printf("Digite dois numeros inteiros nao negativos");
			   scanf("%d %d",&a,&b);
			
			   resultado = multiRec(a , b);
			
			   printf("%d\n", resultado);
			
			return 0;
}


int multiRec(int a , int b){
			
			  if(b == 0){
						return 0;
			}
			  else if(b == 1){
						printf("%d = ", a);
			}
			else{
						printf("%d + ", a);
			}
			
			   return a + multiRec(a , b - 1);
}