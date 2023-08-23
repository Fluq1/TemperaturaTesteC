#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float ba1, ba2, altu, area;
    printf("Digite o valor da primeira base do trapézio: ");
    scanf("%f", &ba1);
    printf("Digite o valor da segunda base do trapézio: ");
    scanf("%f", &ba2);
    printf("Digite o valor da altura do trapézio: ");
    scanf("%f", &altu);
    area = (ba1 + ba2) * altu / 2;
    printf("A área do trapézio é: %.2f\n", area);
    return 0;
}
