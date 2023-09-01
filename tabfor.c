#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número para ver sua taboada: ");
    scanf("%d", &num);
    printf("Taboada do %d:\n", num);

    for (int mult = 1; mult <= 10; mult++)
    {
        printf("%d x %d = %d\n", num, mult, num * mult);
    }

    return 0;
}
