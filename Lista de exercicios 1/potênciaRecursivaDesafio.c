#include <stdio.h>

int potencia(int b,int e);

int main() {
				int b , e;
				
				printf("Digite a base (b): ");
				scanf("%d", &b);
				
				printf("Digite o exponente (e): ");
				scanf("%d", &e);
				
				
				int resultado = potencia(b , e);
				printf("Resultado final: %d %d = %d\n", b , e ,resultado);
				
				
				
				
				return 0;
}

int potencia(int b,int e){ // caso base
				if(e == 0){
								return 1;
				}
				
			int div = potencia(b, e / 2)	; // chamada recursiva reduzindo e pela metade
				
				if(e % 2 == 0){
								printf("Potencia((base %d, expo %d) e: %d\n", b, e, div * div);
												return div * div; // caso par
				}else{
								printf("Potencia (base %d, expo %d e: %d\n)", b, e, b * div * div );
												return b * div * div; // caso impar
				}
				
}