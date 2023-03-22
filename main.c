#include <stdio.h>

int main() {
    float num1,num2,soma;
    printf("Escrava primeiro numero :");
    scanf(" %f",&num1);

    printf("Escrava o segundo numero :");
    scanf(" %f",&num2);

    soma = num1 + num2;

    printf("O valor da soma = %f ",soma);

    if(soma > 20){
        soma = soma + 8;
        printf("O valor da soma eh maior que 20 logo soma mais 8, soma = %f ",soma);
    }
    if(soma < 20){
        soma = soma - 5;
        printf("O valor da soma eh menor que 20 logo subtrai 5, soma = %f ",soma);
    }

    return 0;
}
