#include <stdio.h>
#include <locale.h> //

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("********************\n");
    printf("Jogo de adivinhação!\n");
    printf("*******************");

    int numero_secreto = 42;

    int chute;
    printf("Digite o valor do seu chute: ");
    scanf("%d", &chute);
    printf("O seu chute foi %d e o número secreto é: %d" , chute, numero_secreto);

}