//principais tipos de dados
#include <stdio.h>

int main () {
    int number = 10;
    float decimalNumber = 15.25;
    char letter = 'A';
    char name[5] = "Ryan";

    //%d para números interiros, \n para brake na linha
    printf("Numero: %d \n", number);

    //%f para números de ponto flutuante, %x.xf para quantidade de casas decimais
    printf("Numero: %.2f \n", decimalNumber);

    //c% para char, apenas um caractere
    printf("Letras: %c \n", letter);

    //s% para strings
    printf("Nome: %s \n", name);

    return 0;
}