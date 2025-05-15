#include <stdio.h>

int Potencia(int base, int exponente);

int main() {
    int base, exponente;

    // Entrada dos valores
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o exponente: ");
    scanf("%d", &exponente);

    // Verifica se o expoente é negativo
    if (exponente < 0) {
        printf("O exponente deve ser um número inteiro positivo.\n");
        return 1;
    }

    // Chama a função recursiva e exibe o resultado
    int resultado = Potencia(base, exponente);
    printf("%d^%d = %d\n", base, exponente, resultado);

    return 0;
}

// Função recursiva para calcular potência
int Potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1; // Qualquer número elevado a 0 é 1
    }
    return base * Potencia(base, exponente - 1);
}
