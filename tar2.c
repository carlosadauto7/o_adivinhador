#include <stdio.h>

int main() {

    int x;
    printf("Digite um valor inteiro positivo para a variável x: ");
    scanf("%d", &x);

    int y;
    printf("Digite um valor inteiro e positivo para a variável y: ");
    scanf("%d", &y);

    int resultado = x * y ;
    printf("O resultado da multiplicaçãoe entre %d e %d é: %d", x,y,resultado);


}