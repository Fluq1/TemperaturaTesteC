#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float sal, imp;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &sal);
    imp = 0.05 * sal;
    printf("O valor do imposto de renda a ser pago é: %.2f\n", imp);
    return 0;
}
