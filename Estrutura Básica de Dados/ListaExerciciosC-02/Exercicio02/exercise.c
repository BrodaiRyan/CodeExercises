#include <stdio.h>

int aprovacao();

int main() {
    aprovacao();

    return 0;
}

int aprovacao() {
    int opcao;
    int nota;
    int frequencia;

    printf("Escolha uma opcao:\n1 - Verificar se o aluno foi aprovado\n2 - Sair\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Insira a nota final do aluno:(0 a 10)\n");
            scanf("%d", &nota);

            printf("Insira a porcentagem de frequencia:(0 a 100)\n");
            scanf("%d", &frequencia);

            if(nota >= 7 && frequencia >= 75) {
                printf("Aluno aprovado! Parabens");

            }else if(nota < 7 && frequencia < 75) {
                printf("Aluno reprovado por nota e frequencia abaixo da media.");

            }else if(nota < 7) {
                printf("Aluno reprovado por nota abaixo da media. ");

            }else if(frequencia < 75) {
                printf("Aluno reprovado por baixa frequencia.");

            }

            break;

        case 2:
            printf("Programa encerrado...");
            break;

        default:
            printf("Opcao invalida.");
    }

    return 0;

}