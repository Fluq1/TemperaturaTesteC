#include <stdio.h>
#include <locale.h>

float calcularPrecoTotal(int codigoProduto, int quantidade) {
    float precoUnitario;
    switch (codigoProduto) {
        case 1001:
            precoUnitario = 5.32;
            break;
        case 1324:
            precoUnitario = 6.45;
            break;
        case 6548:
            precoUnitario = 2.37;
            break;
        case 987:
            precoUnitario = 5.32;
            break;
        case 7623:
            precoUnitario = 6.45;
            break;
        default:
            printf("Código de produto inválido!\n");
            return 0;
    }
    float precoTotal = precoUnitario * quantidade;
    return precoTotal;
}
int main() {
    int codigoProduto, quantidade;
    setlocale(LC_ALL, "");
    printf("Lista de códigos de produtos:\n");
    printf("1001 - Produto 1\n");
    printf("1324 - Produto 2\n");
    printf("6548 - Produto 3\n");
    printf("987 - Produto 4\n");
    printf("7623 - Produto 5\n");
    printf("Digite o código do produto: ");
    scanf("%d", &codigoProduto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    float precoTotal = calcularPrecoTotal(codigoProduto, quantidade);
    printf("Preço total: R$ %.2f\n", precoTotal);
    return 0;
}
