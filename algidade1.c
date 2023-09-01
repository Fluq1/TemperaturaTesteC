#include <stdio.h>

int main() {
    int ano, mes, di;
    int idade;

    printf("Digite a idade em ano, meses e dias: ");
    scanf("%d %d %d", &ano, &mes, &di);

    idade = ano * 365 + mes * 30 + di;

    printf("Idade em dias: %d\n", idade);

    return 0;
}
