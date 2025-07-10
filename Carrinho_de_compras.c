#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 3

int main() {

    char nomes[MAX_PRODUTOS][30] = {"Laranja", "Maracujá", "Maça"};
    float precos[MAX_PRODUTOS] = {5.50, 7.00, 3.99};
    int estoque[MAX_PRODUTOS] = {10, 8, 15};

    int carrinho_qtd[MAX_PRODUTOS] = {0};
    int opcao, quantidade;
    float total = 0;

    printf("--- Bem-vindo a frutaria Cordeiro ---\n");

    while (1) {
        printf("\nProdutos disponíveis:\n");
        for (int i = 0; i < MAX_PRODUTOS; i++) {
            printf("%d - %s (R$%.2f) - Estoque: %d\n", i + 1, nomes[i], precos[i], estoque[i]);
        }

        printf("Digite o número do produto que deseja comprar ou (0 para finalizar o programa): ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        if (opcao < 1 || opcao > MAX_PRODUTOS) {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        int index = opcao - 1;

        printf("Digite a quantidade que deseja comprar: ");
        scanf("%d", &quantidade);

        if (quantidade <= 0) {
            printf("Quantidade inválida.\n");
        } else if (quantidade > estoque[index]) {
            printf("\nQuantidade maior que o estoque disponível.\n");
        } else {
            carrinho_qtd[index] += quantidade;
            estoque[index] -= quantidade;
            printf("\nProduto adicionado ao carrinho!\n");
        }
    }

    printf("\n=== Resumo da Compra ===\n");
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        if (carrinho_qtd[i] > 0) {
            float subtotal = carrinho_qtd[i] * precos[i];
            printf("%s - Quantidade: %d - Total: R$%.2f\n", nomes[i], carrinho_qtd[i], subtotal);
            total += subtotal;
        }
    }
    printf("Valor total da compra: R$%.2f\n", total);

    return 0;
}