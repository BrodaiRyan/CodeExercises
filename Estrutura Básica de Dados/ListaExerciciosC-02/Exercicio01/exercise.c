#include <stdio.h>

int cardapio();

int main() {
    cardapio();

    return 0;
}

int cardapio() {
    int opcao;

    printf("Escolha uma opção de lanche:\n1 - Hamburguer\n2 - Cachorro-Quente\n3 - Pizza\n4 - Sair\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Hamburguer.\nSeu pedido ja esta sendo preparado...");
            break;
        
        case 2:
            printf("Pizza.\nSeu pedido ja esta sendo preparado...");
            break;

        case 3:
            printf("Cachorro-Quente.\nSeu pedido ja esta sendo preparado...");
            break;

        case 4:
            printf("Encerrando pedido...");
            break;

        default:
            printf("Numero de Pedido invalido.");

    }

    return 0;
}