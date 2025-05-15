#include <stdio.h>

int Comprimento(char str[],int pos);

int main()
{
	char str[100];


	printf("Digite uma palavra\n");
	scanf("%s",str);

	int tamanho = Comprimento(str,0);

	printf("A string tem %d caracteres",tamanho);


	return 0;
}

int Comprimento(char str[],int pos)
{
	if(str[pos] == '\0')
	{
		return 0;
	}
	return 1 +  Comprimento(str,pos + 1);
}
