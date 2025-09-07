#include<stdio.h>

int torcedores10();

int main() {
    torcedores10();
    
    return 0;
}

int torcedores10() {
    int fans;
    int capacity;
    int ocupation;

    printf("Insira a capacidade do estadio: ");
    scanf("%d", &capacity);

    printf("Insira a quantidade de torcedores presente: ");
    scanf("%d", &fans);

    ocupation = (fans * 100) / capacity;

    if(ocupation > 90) {
        printf("Lotado!");

    }else if(ocupation > 70 && ocupation <= 90) {
        printf("Otima presenca de publico!");

    }else if(ocupation > 50 && ocupation <= 70) {
        printf("Publico razoavel!");

    }else {
        printf("Morumbis...");

    }

    return 0;
}
