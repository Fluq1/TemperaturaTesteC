#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float raio, area;
    const float pi = 3.14159;
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);
    area = pi * raio * raio;
    printf("A área do círculo é: %.2f\n", area);
    return 0;
}
