#include <stdio.h>

int main() {

    printf("********************\n");
    printf("Jogo de adivinhação!\n");
    printf("*******************");

    int numero_secreto = 42;

    int chute;
    printf("Digite o valor do seu chute: ");
    scanf("%d", &chute);

    int acertou = (chute == numero_secreto);

    if(acertou) {
        printf("Parabéns, você acaba de acertar o número. \n");
    }
    else {
        int maior = (chute > numero_secreto); 

        if (maior) {
            printf("O seu número é maior do que o número secreto. \n");
        }
        else {
            printf("O seu número é menor do que o número secreto. \n");
        }
    }
}