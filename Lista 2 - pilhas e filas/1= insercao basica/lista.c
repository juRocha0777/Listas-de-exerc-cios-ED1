#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void inserir_inicio(No **lista,int valor)
{
	No *novo = (No *) malloc(sizeof(No));
	if(novo == NULL)
	{
		printf("Erro de alocacao de memoria\n");
		return;

	}

	novo ->valor = valor;
	novo ->prox = *lista;
	*lista = novo;
}

void inserir_fim(No **lista,int valor)
{
	No *novo = (No *) malloc(sizeof(No));
	if(novo == NULL)
	{
		printf("Erro de alocacao de memoria\n");
		return;
	}

	novo ->valor = valor;
	novo ->prox = NULL;

	if(*lista == NULL)
	{
		*lista = novo;
	}
	else
	{
		No *atual = *lista;

		while(atual ->prox != NULL)
		{
			atual = atual->prox;


		}
		atual->prox= novo;
	}
}

void imprimir_lista(No *lista)
{
	No *atual = lista;
	while(atual != NULL)
	{
		printf("%d ->",atual->valor);
		atual = atual ->prox;
	}
	printf("NULL");
}
