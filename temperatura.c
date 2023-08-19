#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"");
    float temperatura;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f",&temperatura);

    if(temperatura < 20){
        printf("Está frio\n");
    } else if(temperatura >= 20 && temperatura <=30){
        printf("Está agradável\n");
    } else {
        printf("Está quente\n");
    }

    return 0;
}