#include <stdio.h>
#include<string.h>

void invertSTR(char *str,int inicio,int fim);

int main() {
	char str[100];
				scanf("%99[^\n]", str);
				
				invertSTR(str,0, strlen(str) - 1);
				
				printf("%s\n", str);
				
				
				
				
				return 0;
}

void invertSTR(char *str,int inicio ,int fim){
				if(inicio >= fim){
								return;
				}
				// inversao da string manipulando as posicoes inicio e fim
				char temp = str[inicio];
				str[inicio] = str[fim];
				str[fim] = temp;
				// chamada recursiva para percorrer o array
				invertSTR(str,inicio + 1,fim - 1);
}