#include<stdio.h>

int aproveitamento04();

int main() {
    aproveitamento04();
    
    return 0;
}

int aproveitamento04() {
    int victorie, tie, lost;

    printf("Digite a quantidade de vitorias: ");
    scanf("%d", &victorie);

    printf("Digite a quantidade de empates: ");
    scanf("%d", &tie);

    printf("Digite a quantidade de derrotas: ");
    scanf("%d", &lost);

    //todos os multiplicadores somente para deixar o codigo mais explicativo e coeso com o cabeçalho
    int points = (victorie * 3) + (tie * 1) + (lost * 0);
    printf("O rendimento total do time foi de: %d pontos.", points);

    return 0;
}
