#include <stdio.h>
//operadores matemáticos

int funcaoDeSoma();

int main() {
    funcaoDeSoma();

    return 0;
}

int funcaoDeSoma() {
    int num1, num2;
    int result;

    printf("Escolha dois numeros: ");
    scanf("%d %d", &num1, &num2 );
    
    //definindo a variável result
    result = num1 + num2;
    
    printf("Soma: %d + %d = %d \n", num1, num2, num1 + num2);
    printf("Soma: %d + %d = %d \n", num1, num2, result);

    printf("Subtracao: %d - %d = %d \n", num1, num2, num1 - num2);

    printf("Multiplicacao: %d * %d = %d \n", num1, num2, num1 * num2);

    printf("Divisao: %d / %d = %d \n", num1, num2, num1 / num2);

    printf("Modulo: %d %% %d = Resto %d \n", num1, num2, num1 % num2);


    return 0;
}