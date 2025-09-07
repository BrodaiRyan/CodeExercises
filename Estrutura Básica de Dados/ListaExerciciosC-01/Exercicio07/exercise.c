#include<stdio.h>

int aptidao07();

int main() {
    aptidao07();
    
    return 0;
}

int aptidao07() {
    char name[20];
    int age;

    printf("Insira o nome e a idade do jogador : ");
    scanf("%s %d", &name, &age);

    if(age <= 20) {
        printf("O jogador %s deve jogar na categoria sub 20!", name);

    }else {
        printf("O jogador %s deve jogar na categoria proficional!", name);

    }

    return 0;
}
