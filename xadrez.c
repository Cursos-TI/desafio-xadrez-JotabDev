#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int cavalo = 1;
    int contador;
    char peçaMovimento;
    
/*
Implementando uma movimento mais dinamica_Fase Teste...
    prinf("\nSeja Bem vindo ao Jogo de Xadrez\n");
    prinf("Peças Dsiponiveis para Movimentação:\n");
    prinf("R - Rainha\n");
    printf("T - Torre\n");
    printf("B - Bispo\n");
    prinf("C - Cavalo\n");
    printf("Qual sua peça escolhida? ");
    scanf("%c", &peçaMovimento);

    switch(peçaMovimento){
        case 'r': 
        case 'R':
            printf(" Quantas casas deseja move?\n");
        case 'T':
        case 't':
            printf(" Quantas casas deseja move?\n");
        case 'B':
        case 'b':
            printf(" Quantas casas deseja move?\n");
        
    }
*/
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     printf("Movimentação Bispo\n");
    for(int b = 0; b<=bispo; b++){
        printf("Direita Casa %d\n", b);
        printf("Cima Casa %d\n", b+=1);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação Torre\n");
    contador = 1;
    while(contador <=5){
        printf("Direita Casa %d\n", contador);
        contador+=1;
    };

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
contador = 1;
    printf("\nMovimentação Rainha\n");

    do{
        printf("Esquerda Casa %i\n", contador);
        contador++;
    }while(contador <=rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo\n");
    while(cavalo--){
        for(int c = 1; c <=2; c++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
