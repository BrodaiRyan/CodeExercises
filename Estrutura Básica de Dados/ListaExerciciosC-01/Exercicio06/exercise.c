#include<stdio.h>

int cartao06();

int main() {
    cartao06();
    
    return 0;
}

int cartao06() {
    int cards;

    printf("Insira a quantidade de cartoes amarelos o jogador recebeu: ");
    scanf("%d", &cards);

    if(cards == 1) {
        printf("O jogador continua no campo!");

    }else if(cards == 2) {
        printf("O jogador foi expulso!");

    }else {
        printf("Valor insserido invalido.");

    }

    return 0;
}
