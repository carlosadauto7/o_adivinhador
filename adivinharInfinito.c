#include <stdio.h>

int main() {
    // informações do cabeçalho do jogo 
    printf("********************\n");
    printf("Jogo de adivinhação!\n");
    printf("*******************\n");

    // informações das configurações do jogo
    int numeroSecreto = 42;
    int ganhou = 0;  // Verificação do jogo em booleano
    int tentativasDoJogador = 0;


    // loop de infinito do jogo  
    while ( ganhou == 0 ) {
        
        int chute;

        printf("Tentativa : %d  \n" , tentativasDoJogador + 1 );
        printf("Digite o valor edo seu chute: \n");
        scanf("%d", &chute);

        if ( chute < 0) {
            printf("Você não pode digitar números negativos. Tente novamente! \n");

            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou) {
            printf("Parabéns, você acaba de acertar o número. \n");

            ganhou = 1;
        }

        else if (maior) {
            printf("O seu número é maior do que o número secreto. \n");
            }

        else {
            printf("O seu número é menor do que o número secreto. \n");
            }

        tentativasDoJogador += 1; 

    }
    printf("Fim de jogo. Obrigado por jogar aqui.\n");
    printf("Você acertou em %d tentativas" , tentativasDoJogador);

    return 0;
}