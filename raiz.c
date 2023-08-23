#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    int numero1;
    float raiz, quadrado;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero1);
    raiz = sqrt(numero1);
    quadrado = numero1 * numero1;
    printf("Raiz quadrada: %.2f\n", raiz);
    printf("Número elevado ao quadrado: %.2f\n", quadrado);
    return 0;
}
