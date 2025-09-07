#include<stdio.h>

int conversao03();

int main() {
    conversao03();

    return 0;
}

int conversao03() {
    int tempoMin, minuto, hora;
    
    printf("digiteo tempo da partida em minutos: ");
    scanf("%d", &tempoMin);

    hora = tempoMin / 60;
    minuto = tempoMin % 60;

    printf("O tempo de jogo foi de %d hora(s) %d minuto(s).", hora, minuto);

    return 0;
}
