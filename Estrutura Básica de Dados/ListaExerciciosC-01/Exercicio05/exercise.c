#include<stdio.h>

int diferenca05();

int main() {
    diferenca05();
    
    return 0;
}

int diferenca05() {
    float salaryA;
    float salaryB;
    float result;

    printf("Insira o maior salario entre os jogadores: ");
    scanf("%f", &salaryA);

    printf("Insira o maior salario entre os jogadores: ");
    scanf("%f", &salaryB);

    result = salaryA - salaryB;

    printf("A diferença de salario entre os dois eh de: $%.2f", result);

    return 0;
}
