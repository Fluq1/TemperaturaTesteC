#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, mult = 1;
    printf("Digite um número para ver sua taboada: ");
    scanf("%d", &num);
    printf("Taboada do %d:\n", num);
    while (mult <= 10)
    {
        printf("%d x %d = %d\n", num, mult, num * mult);
        mult++;
    }

    return 0;
}
