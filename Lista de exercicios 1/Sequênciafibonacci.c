#include <stdio.h>

int fibonacci(int n);

int main() {
				int num,resultado;
				
				printf("Digite um numero: ");
				scanf("%d",&num);
				
				printf("%d (", num);
				for(int i = 0; i <= num; i++){
								
								printf("%d", fibonacci(i));
												if(i < num){
																				printf(", ");
																								
												}
				}
				printf(")\n")	;
				
				
				return 0;
}

int fibonacci(int n){
				
				if(n == 0){
								return 0;
				} else if (n == 1){
								return 1;
				} else {
							return	 fibonacci(n - 1) + fibonacci(n - 2);
								
				}
																
				
}