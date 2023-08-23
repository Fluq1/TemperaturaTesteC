#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    printf("Soma: %d\n", num1 + num2);
    printf("Subtração (Primeiro - Segundo): %d\n", num1 - num2);
    printf("Subtração (Segundo - Primeiro): %d\n", num2 - num1);
    printf("Multiplicação: %d\n", num1 * num2);
    printf("Divisão (Primeiro / Segundo): %.2f\n", (float)num1 / num2);
    printf("Divisão (Segundo / Primeiro): %.2f\n", (float)num2 / num1);
    printf("Quociente inteiro (Primeiro // Segundo): %d\n", num1 / num2);
    printf("Quociente inteiro (Segundo // Primeiro): %d\n", num2 / num1);
    printf("Resto da divisão (Primeiro %% Segundo): %d\n", num1 % num2);
    printf("Resto da divisão (Segundo %% Primeiro): %d\n", num2 % num1);
    return 0;
}
