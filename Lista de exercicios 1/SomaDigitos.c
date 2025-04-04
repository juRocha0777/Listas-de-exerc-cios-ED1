#include <stdio.h>

void PrintSomaDig(int n, int primeiro);
int somaDigitos(int n);

int main() {
    int num;
    scanf("%d", &num);
    
    PrintSomaDig(num, 1);
    printf(" = %d\n", somaDigitos(num));
    
    return 0;
}

void PrintSomaDig(int n, int primeiro) {
    if (n == 0) {
        return;
    }

    int digito = n % 10;
    PrintSomaDig(n / 10, 0);

    if (n / 10 == 0) {
        printf("(%d", digito); // Primeiro dígito
    } else {
        printf("+%d", digito);  // Demais dígitos
    }

    if (primeiro) {
        printf(")"); // Fecha parêntese 
    }
}

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}