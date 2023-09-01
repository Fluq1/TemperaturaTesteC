#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int idade;
    printf("Bem-vindo ao programa de classificação de nadadores por idade!\n As classes são:\n Infantil A (5 a 7 anos)\n Infantil B (8 a 10 anos)\n Juvenil A (11 a 13 anos)\n Juvenil B (14 a 17 anos)\n Adulto (18+ anos)\n");
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade < 5) {
        printf("Muito novo, não obteve classificação.\n");
    } else if (idade >= 5 && idade <= 7) {
        printf("Sua classificação é Infantil A.\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Sua classificação é Infantil B.\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Sua classificação é Juvenil A.\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Sua classificação é Juvenil B.\n");
    } else {
        printf("Sua classificação é Adulto.\n");
    }
    return 0;
}
