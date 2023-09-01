#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i;
    float a, b, c;
    printf("Digite um valor inteiro e positivo de 1 a 3: ");
    scanf("%d", &i);
    printf("Digite três valores reais: ");
    scanf("%f %f %f", &a, &b, &c);
    switch (i) {
        case 1:
            if (a <= b && a <= c) {
                printf("%.2f %.2f %.2f\n", a, (b <= c) ? b : c, (b <= c) ? c : b);
            } else if (b <= a && b <= c) {
                printf("%.2f %.2f %.2f\n", b, (a <= c) ? a : c, (a <= c) ? c : a);
            } else {
                printf("%.2f %.2f %.2f\n", c, (a <= b) ? a : b, (a <= b) ? b : a);
            }
            break;
        case 2:
            if (a >= b && a >= c) {
                printf("%.2f %.2f %.2f\n", a, (b >= c) ? b : c, (b >= c) ? c : b);
            } else if (b >= a && b >= c) {
                printf("%.2f %.2f %.2f\n", b, (a >= c) ? a : c, (a >= c) ? c : a);
            } else {
                printf("%.2f %.2f %.2f\n", c, (a >= b) ? a : b, (a >= b) ? b : a);
            }
            break;
        case 3:
            if (a >= b && a >= c) {
                printf("%.2f %.2f %.2f\n", (b >= c) ? b : c, a, (b >= c) ? c : b);
            } else if (b >= a && b >= c) {
                printf("%.2f %.2f %.2f\n", (a >= c) ? a : c, b, (a >= c) ? c : a);
            } else {
                printf("%.2f %.2f %.2f\n", (a >= b) ? a : b, c, (a >= b) ? b : a);
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    return 0;
}