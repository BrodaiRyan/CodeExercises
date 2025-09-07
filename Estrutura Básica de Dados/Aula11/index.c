#include <stdio.h>

int main() {
    int age;

    printf("Digite sua idade: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Voce eh maior de idade.");

    }else {
        printf("Voce eh menor de idade.");

    }

    return 0;
}