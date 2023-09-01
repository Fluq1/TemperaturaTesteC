#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num, mult = 1;
    printf("Digite um número para ver sua taboada: ");
    scanf("%d", &num);
    printf("Taboada do %d:\n", num);
    do
    {
        printf("%d x %d = %d\n", num, mult, mult * num);
        mult++;

    } while (mult <= 10);

    return 0;
}