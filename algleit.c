#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int A, B, C;

    printf("Digite três números inteiros e positivos: ");
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C) {
        if (B >= C) {
            printf("Ordem decrescente: %d %d %d\n", A, B, C);
        } else {
            printf("Ordem decrescente: %d %d %d\n", A, C, B);
        }
    } else if (B >= A && B >= C) {
        if (A >= C) {
            printf("Ordem decrescente: %d %d %d\n", B, A, C);
        } else {
            printf("Ordem decrescente: %d %d %d\n", B, C, A);
        }
    } else {
        if (A >= B) {
            printf("Ordem decrescente: %d %d %d\n", C, A, B);
        } else {
            printf("Ordem decrescente: %d %d %d\n", C, B, A);
        }
    }
    return 0;
}
