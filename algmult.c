#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int a, b;
    printf("Digite o primeiro valor (Inteiro): ");
    scanf("%d", &a);
    printf("Digite o segundo valor (Inteiro): ");
    scanf("%d", &b);
    if (a % b == 0 || b % a == 0) {
        printf("São múltiplos.\n");
    } else {
        printf("Não são múltiplos.\n");
    }
    return 0;
}
