#include <stdio.h>

int Potencia(int base, int exponente);

int main() {
    int base, exponente;

    // Entrada dos valores
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o exponente: ");
    scanf("%d", &exponente);

    // Verifica se o expoente � negativo
    if (exponente < 0) {
        printf("O exponente deve ser um n�mero inteiro positivo.\n");
        return 1;
    }

    // Chama a fun��o recursiva e exibe o resultado
    int resultado = Potencia(base, exponente);
    printf("%d^%d = %d\n", base, exponente, resultado);

    return 0;
}

// Fun��o recursiva para calcular pot�ncia
int Potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; // Qualquer n�mero elevado a 0 � 1
    }
    return base * Potencia(base, exponente - 1);
}
