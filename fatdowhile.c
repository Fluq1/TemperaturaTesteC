#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num, mult = 1;
    int fatorial = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <0){
        printf("Não existe fatorial de números negativos.\n");
    } else {
    do {
       fatorial *= mult;
       mult++;
    } while (mult <= num);
    printf("O fatorial de %d é %d\n", num, fatorial);
    }
    return 0;
}