#ifndef LISTA_H
#define LISTA_H

typedef struct No
{
	int valor;
	struct No*prox;
} No;

void inserir_inicio( No **lista, int valor);
void inserir_fim(No **lista,int valor);
void imprimir_lista(No *lista);



#endif
