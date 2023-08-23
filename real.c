#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    float num, inteira, frac, arre;
    printf("Digite um número real, utilize vírgula para a casa decimal: ");
    scanf("%f", &num);
    inteira = (int)floor(num);
    frac = num - inteira;
    arre = (int)round(num);
    printf("Parte Inteira: %d\n", (int)inteira);
    printf("Parte Decimal: %.2f\n", frac);
    printf("Arredondado: %d\n", (int)arre);
    return 0;
}
