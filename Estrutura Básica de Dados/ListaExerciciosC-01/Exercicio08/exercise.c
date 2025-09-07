#include<stdio.h>

int desempenho08();

int main() {
    desempenho08();
    
    return 0;
}

int desempenho08() {
    int goals;

    printf("Insira a quantidade de gols marcados pelo jogador nessa temporada: ");
    scanf("%d", &goals);

    if(goals > 10) {
        printf("A temporada foi exelente!");

    }else if (goals <= 10 && goals >= 5){
        printf("A temporada foi boa!");

    }else {
        printf("A temporada foi abaixo do esperado.");

    }

    return 0;
}
