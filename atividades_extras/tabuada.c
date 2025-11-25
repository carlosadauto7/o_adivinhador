#include <stdio.h>

int main(void)
{
    int numero_tabuada;
    printf("Digite um número inteiro para que você veja a sua tabuada: \n");
    scanf("%d", &numero_tabuada);

    int i = 1;

    for (i; i < 11 ; i++) {
        printf("%d x %d = %d \n" , numero_tabuada, i, numero_tabuada * i);
    }

    return 0;
}