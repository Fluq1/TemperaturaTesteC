#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    float altura, peso;
    char sexo;
    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);
    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido. Use 'M' para masculino e 'F' para feminino.\n");
        return 1;
    }
    printf("Seu peso ideal é %.2f kg.\n", peso);
    return 0;
}
