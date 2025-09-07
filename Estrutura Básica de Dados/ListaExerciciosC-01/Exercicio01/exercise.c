#include<stdio.h>

int apresentacao01();

int main() {
    apresentacao01();

    return 0;
}

int apresentacao01() {
    char name[50];
    int age;
    int goals;

    printf("Preencha o nome do jogador: ");
    scanf(" %[^\n]", name);

    printf("Agora a idade dele: ");
    scanf("%d", &age);

    printf("E o total de gols que marcou na carreira: ");
    scanf("%d", &goals);

    printf("-----\n");
    printf("Jogador: %s \nIdade: %d\nGols na Carreira: %d", name, age, goals);

    return 0;
}
