#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float base, altu, area;
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altu);
    area = (base * altu) / 2;
    printf("A área do triângulo é: %.2f\n", area);
    return 0;
}
