#include <stdio.h>

int main() {
    int contador = 1;
    int acumulador = 0 ;

    while (contador <= 100) {

        acumulador += contador ;

        contador++;

    }
    printf("A soma dos numéros de 1 a 100 é: %d" , acumulador);

    return 0;

}