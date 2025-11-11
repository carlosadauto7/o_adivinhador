#include <stdio.h>

int main() {
    
    printf("***************\n");
    printf("Hello, Wordl\n");
    printf("**************\n");

    int idadeUsuario; 
    char nomeUsuario;

    for (int i = 1; i < 3 ; i++) {
        
        printf("Digite o seu nome: %c \n");
        scanf("%d", &nomeUsuario);

        printf("Digite a sua idade: %d \n ");
        scanf("%d", &idadeUsuario);

    
    }
    printf("O seu nome é %c e a sua idade é %d" , nomeUsuario,idadeUsuario);

}