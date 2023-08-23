#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");
    int opcao;

    while (1) {
        printf("Selecione o programa a ser executado:\n");
        printf("1 - Calculo de numeros inteiros\n");
        printf("2 - Calculo de média artimética de Nota\n");
        printf("3 - Calculo de Juros, Rendimento e Valor total\n");
        printf("4 - Separação de Número real em inteiro e fracionário\n");
        printf("5 - Calculo de Raiz quadrada\n");
        printf("6 - Conversão de idade em Meses, Dias, Horas e Minutos\n");
        printf("7 - Calculo da Área de triangulo\n");
        printf("8 - Calculo da Área de círculo\n");
        printf("9 - Calculo da Área de trapézio\n");
        printf("10 - Calculo de valor de imposto de renda\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                {
                    int num1, num2;
                    printf("Digite o primeiro número inteiro: ");
                    scanf("%d", &num1);
                    printf("Digite o segundo número inteiro: ");
                    scanf("%d", &num2);
                    printf("Soma: %d\n", num1 + num2);
                    printf("Subtração (Primeiro - Segundo): %d\n", num1 - num2);
                    printf("Subtração (Segundo - Primeiro): %d\n", num2 - num1);
                    printf("Multiplicação: %d\n", num1 * num2);
                    printf("Divisão (Primeiro / Segundo): %.2f\n", (float)num1 / num2);
                    printf("Divisão (Segundo / Primeiro): %.2f\n", (float)num2 / num1);
                    printf("Quociente inteiro (Primeiro // Segundo): %d\n", num1 / num2);
                    printf("Quociente inteiro (Segundo // Primeiro): %d\n", num2 / num1);
                    printf("Resto da divisão (Primeiro %% Segundo): %d\n", num1 % num2);
                    printf("Resto da divisão (Segundo %% Primeiro): %d\n", num2 % num1);
                }
                break;

            case 2:
                {
                    float num1, num2, num3, media;
                    printf("Digite a primeira nota: ");
                    scanf("%f", &num1);
                    printf("Digite a segunda nota: ");
                    scanf("%f", &num2);
                    printf("Digite a terceira nota: ");
                    scanf("%f", &num3);
                    media = (num1 + num2 + num3) / 3;
                    printf("Média do aluno = %.1f\n", media);
                }
                break;

            case 3:
                {
                    float dep1, jur2, rend3, tot4;
                    printf("Qual é o valor do depósito: ");
                    scanf("%f", &dep1);
                    printf("Qual é a taxa de juros: ");
                    scanf("%f", &jur2);
                    rend3 = (dep1 * jur2) / 100;
                    tot4 = dep1 + rend3;
                    printf("Valor do rendimento: %.2f\n", rend3);
                    printf("Valor total após o rendimento: %.2f\n", tot4);
                }
                break;

            case 4:
                {
                    float num, inteira, frac, arre;
                    printf("Digite um número real, utilize vírgula para a casa decimal: ");
                    scanf("%f", &num);
                    inteira = (int)floor(num);
                    frac = num - inteira;
                    arre = (int)round(num);
                    printf("Parte Inteira: %d\n", (int)inteira);
                    printf("Parte Decimal: %.2f\n", frac);
                    printf("Arredondado: %d\n", (int)arre);
                }
                break;

            case 5:
                {
                    int numero1;
                    float raiz, quadrado;
                    printf("Digite um número inteiro: ");
                    scanf("%d", &numero1);
                    raiz = sqrt(numero1);
                    quadrado = numero1 * numero1;
                    printf("Raiz quadrada: %.2f\n", raiz);
                    printf("Número elevado ao quadrado: %.2f\n", quadrado);
                }
                break;

            case 6:
                {
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
                }
                break;

            case 7:
                {
                    float base, altu, area;
                    printf("Digite o valor da base do triângulo: ");
                    scanf("%f", &base);
                    printf("Digite o valor da altura do triângulo: ");
                    scanf("%f", &altu);
                    area = (base * altu) / 2;
                    printf("A área do triângulo é: %.2f\n", area);
                }
                break;

            case 8:
                {
                    float raio, area;
                    const float pi = 3.14159;
                    printf("Digite o valor do raio do círculo: ");
                    scanf("%f", &raio);
                    area = pi * raio * raio;
                    printf("A área do círculo é: %.2f\n", area);
                }
                break;

            case 9:
                {
                    float ba1, ba2, altu, area;
                    printf("Digite o valor da primeira base do trapézio: ");
                    scanf("%f", &ba1);
                    printf("Digite o valor da segunda base do trapézio: ");
                    scanf("%f", &ba2);
                    printf("Digite o valor da altura do trapézio: ");
                    scanf("%f", &altu);
                    area = (ba1 + ba2) * altu / 2;
                    printf("A área do trapézio é: %.2f\n", area);
                }
                break;

            case 10:
                {
                    float sal, imp;
                    printf("Digite o salário do funcionário: ");
                    scanf("%f", &sal);
                    imp = 0.05 * sal;
                    printf("O valor do imposto de renda a ser pago é: %.2f\n", imp);
                }
                break;

            case 0:
                printf("Encerrando o programa.\n");
                return 0;

            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    }

    return 0;
}
