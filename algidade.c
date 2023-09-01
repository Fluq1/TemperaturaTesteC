#include <stdio.h>

int main() {
    int idade;
    int ano, mes, di;

    printf("Digite a idade em dias: ");
    scanf("%d", &idade);

    ano = idade / 365;
    mes = (idade % 365) / 30;
    di = (idade % 365) % 30;

    printf("Idade em Anos: %d\n", ano);
    printf("Idade em Meses: %d\n", mes);
    printf("Idade em Dias: %d\n", di);

    return 0;
}
