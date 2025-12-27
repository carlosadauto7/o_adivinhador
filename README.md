# Jogo de Adivinhacao

Este e um jogo de console desenvolvido em linguagem C onde o objetivo e descobrir qual e o numero secreto gerado aleatoriamente pelo programa.

## Descricao

O programa define um numero secreto e o jogador deve tentar adivinha-lo. O jogo oferece diferentes niveis de dificuldade, que alteram o numero de tentativas disponiveis. Ao final, o programa exibe a pontuacao do jogador com base na proximidade dos seus palpites em relacao ao numero correto.

## Funcionalidades

* Escolha de nivel de dificuldade: Facil (20 tentativas), Medio (15 tentativas) e Dificil (6 tentativas).
* Sistema de pontuacao baseado no erro de cada chute.
* Validacao para impedir a entrada de numeros negativos.
* Feedback em tempo real informando se o chute foi maior ou menor que o numero secreto.

## Como Executar

1. Certifique-se de ter um compilador de C instalado (como GCC).
2. Salve o codigo em um arquivo chamado `jogo.c`.
3. Abra o terminal e compile o programa:
   ```bash
   gcc jogo.c -o jogo
