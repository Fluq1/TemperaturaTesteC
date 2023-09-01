#include <stdio.h>

int main()
{
    int num, fatorial, mult;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Não é possível calcular o fatorial de um número negativo.\n");
        return 1;
    }
    fatorial = 1;
    mult = 1;
    while (mult <= num)
    {
        fatorial *= mult;
        mult++;
    }
    printf("O fatorial de %d é %d\n", num, fatorial);
    return 0;
}
