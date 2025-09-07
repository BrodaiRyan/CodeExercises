#include<stdio.h>

int mediadegols02();

int main() {
    mediadegols02();

    return 0;
}

int mediadegols02() {
    int partidas;
    int gols;
    float media;

    printf("Insira a quantidade de partidas que o jogador jogou: ");
    scanf("%d", &partidas);

    printf("Insira a quantidade total de gols marcados: ");
    scanf("%d", &gols);

    if(partidas != 0) {
    media = (float)gols / partidas;

    printf("-----\nA media de gols por partida eh de: %.2f", media);

    }else {
        printf("-----\nNumero de partidas deve ser maior que 0.");

    }

    return 0;
}
