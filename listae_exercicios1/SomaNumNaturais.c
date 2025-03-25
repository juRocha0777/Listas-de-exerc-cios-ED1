#include <stdio.h>

int Soma(int n);

int main() {
				int num,resultado;
				
				printf("Digite um numero\n");
				scanf("%d", &num);
				
				printf("(");
				resultado = Soma(num);
				printf(") = %d\n",resultado);
				
				
				
				return 0;
}

int Soma(int n){
				if(n == 0){
								return 0;
				}
				
				printf("%d ", n);
								if(n > 1){
												printf(" + ");
								}
				
				return n + Soma(n - 1);
}