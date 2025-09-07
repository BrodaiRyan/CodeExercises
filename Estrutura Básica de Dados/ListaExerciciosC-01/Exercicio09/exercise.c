#include<stdio.h>

int idade09();

int main() {
    idade09();
    
    return 0;
}

int idade09() {
    int age;
    int goals;

    printf("Insira a idade e quantidade de gols marcados pelo jogador: ");
    scanf("%d %d", &age, &goals);

    if(age <= 20 && goals > 10) {
        printf("Jovem talento!");

    }else if(age <= 20 && goals <= 10) {
        printf("Jovem em desenvolvimento.");

    }else if(age > 20 && goals > 15) {
        printf("Jogador experiente!");

    }else {
        printf("Estevao.");

    }

    return 0;
}
