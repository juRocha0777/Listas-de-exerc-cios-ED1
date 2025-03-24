#include <stdio.h>

int fatorial(int n);


int main() {
								int num, resultado;
				printf("Digite um numero para saber o seu fatorial\n");
				scanf("%d", &num);
				
				printf("Fatorial De %d, pois %d! =  ",num,num);
				resultado = fatorial(num);
				printf("= %d\n", resultado);
				
				
				return 0;
}

int fatorial(int n){
				if(n == 0){
								
								return 1;
				}
				
				
				if(n > 1){
								printf("%d  x ", n);
				}else{
												printf("%d ",n);
				}
				
				return n * fatorial(n - 1);
}