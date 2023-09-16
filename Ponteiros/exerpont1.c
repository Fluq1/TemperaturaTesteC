#include <stdio.h>

void trocar(int *n1, int *n2);

int main() 
{
    int n1 = 10, n2 = 20;
    printf("Num1 = %d, Num2 = %d\n", n1, n2);
    trocar(&n1, &n2);
    printf("Num1 = %d, Num2 = %d\n", n1, n2);
    return 0;
}

void trocar(int *n1, int *n2) {
    *n1 = *n1 + *n2;
    *n2 = *n1 - *n2;
    *n1 = *n1 - *n2;
}
