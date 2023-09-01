#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float num1, num2, num3;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);
    printf("Seus números são:\n %.2f\n %.2f\n %.2f\n", num1, num2, num3);
    if (num1 >= num2 && num1 >= num3) {
        printf("%.2f é o maior número.", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%.2f é o maior número.", num2);
    } else {
        printf("%.2f é o maior número.", num3);
    }
    return 0;
}