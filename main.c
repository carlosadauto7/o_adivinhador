#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    // informações das configurações do jogo
    int segundos = time(0);
    srand(segundos);
    int numero_grande = rand();

    int numeroSecreto = numero_grande % 100;
    int ganhou = 0;  // Verificação do jogo em booleano
    int tentativasDoJogador = 0;

    double pontos_jogo = 1000; 


    int acertou = 0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;
    }

    for(int i = 1; i <= numerodetentativas; i++) {
        
        int chute;

        printf("Tentativa : %d  \n" , tentativasDoJogador + 1 );
        printf("Digite o valor do seu chute: \n");
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

                    printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        }

        else if (maior) {
            printf("O seu número é maior do que o número secreto. \n");
            }

        else {
            printf("O seu número é menor do que o número secreto. \n");
            }

        tentativasDoJogador += 1; 

        float pontos_perdidos = abs(chute - numeroSecreto) / (float)2;
        pontos_jogo -= pontos_perdidos;




    }


    printf("Fim de jogo. Obrigado por jogar!! .\n");
    printf("Você acertou em %d tentativas \n" , tentativasDoJogador);
    printf("Você fez %.2f pontos, PARABÉNS!! \n" , pontos_jogo);

    return 0;
    
}