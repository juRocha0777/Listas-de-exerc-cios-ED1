#include <stdio.h>
#include "lista.h"

int main()
{
    No *lista = NULL;

    inserir_fim(&lista,7);
    inserir_inicio(&lista,5);

    imprimir_lista(lista);

    return 0;
}
