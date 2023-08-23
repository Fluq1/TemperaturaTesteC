#include <stdio.h>

int main() {
    int idade;
    int mes, di, hr, min;
    printf("Digite a idade em anos: ");
    scanf("%d", &idade);
    mes = idade * 12;
    di = idade * 365;
    hr = di * 24;
    min = hr * 60;
    printf("Idade em Meses: %d\n", mes);
    printf("Idade em Dias: %d\n", di);
    printf("Idade em Horas: %d\n", hr);
    printf("Idade em Minutos: %d\n", min);
    return 0;
}
