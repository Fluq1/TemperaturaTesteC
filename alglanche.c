#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int codigo;
    float preco;
    int quantidade;
    printf("Bem-vindo à lanchonete!\n");
    printf("Especificações:\n");
    printf("100 - Cachorro quente - R$ 1,20\n");
    printf("101 - Bauru simples - R$ 1,30\n");
    printf("102 - Bauru com ovo - R$ 1,50\n");
    printf("103 - Hambúrger - R$ 1,20\n");
    printf("104 - Cheeseburguer - R$ 1,30\n");
    printf("105 - Refrigerante - R$ 1,00\n");
    printf("Digite o código do item pedido: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    switch (codigo) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.30;
            break;
        case 105:
            preco = 1.00;
            break;
        default:
            printf("Código inválido.\n");
            return 1;
    }
    float total = preco * quantidade;
    printf("Total a ser pago: R$ %.2f\n", total);
    return 0;
}
