#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float dep1, jur2, rend3, tot4;
    printf("Qual é o valor do deposito: ");
    scanf("%f", &dep1);
    printf("Qual é a taxa de juros: ");
    scanf("%f", &jur2);
    rend3 = (dep1 * jur2) / 100;
    tot4 = (dep1 + rend3);
    printf("Valor do rendimento: %.2f\n", rend3);
    printf("Valor total após o rendimento: %.2f\n", tot4);
    return 0;
}