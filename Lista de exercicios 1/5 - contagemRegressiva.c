#include <stdio.h>

int contR(int n);


int main() {
				int n;
				printf("Digite o tempo da contagem\n");
				scanf("%d", &n);
				contR(n);
				
				
				
				return 0;
}

int contR(int n){
				if(n >= 0){
								
								printf("%d ", n);
								
								contR(n - 1);
				}
}