#include <stdio.h>
#include <locale.h>

int main() {
        setlocale(LC_ALL, "");
    float num1, num2, num3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    printf("Digite a terceira nota: ");
    scanf("%f", &num2);
    media = (num1 + num2 + num3) / 2;
    printf("Media do aluno = %.1f\n",media);
    return 0;
}