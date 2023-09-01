#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num, mult = 1;
    int fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    for (; mult <= num; mult++)
    {
        fatorial *= mult;
    }

    printf("O fatorial de %d é %d\n", num, fatorial);

    return 0;
}
