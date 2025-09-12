#include <stdio.h>

// Desafio de Xadrez - MateCheck


    // Implementação de Movimentação do cavalo loops aninhados ok
    void movi_horse(int c){
        int i = 0;
        int j = 1;
        if(c > 0){
        while(i < j){
            while(i < 2){
                printf("Cima\n");
                i +=1;
            }
            printf("Direita\n");
        }
        movi_horse(c-1);
    }}
   

    // Implementação de Movimentação do Bispo
    //loops complexo multiplas variaveis
     
    void movi_bispo(int b){
        printf("\nMovimentação Bispo\n");
        if(b > 0){
        for(int i = 0; i <2;i++){
            printf("Cima\n");
            for(int j = 0; j <2; j++){
                printf("Direita\n");
            }
        }
        movi_bispo(b-1);
        }
    }

    // Implementação de Movimentação da Torre
    
    void movi_torre(int t){
        printf("\nMovimentação Torre\n");
        if(t > 0){
        printf("Direita\n");
        movi_torre(t-1);
        }
    }

    void movi_rainha(int r){
        if(r > 0){
            printf("\nmovimentação da Rainha\n");
            printf("Esquerda\n");
            movi_rainha(r -1);
        }
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
   
int main() {

// Chamadas nas funções recursivas...
     movi_horse(5);
    movi_bispo(3);
    movi_torre(2);
    movi_rainha(2);


    return 0;
}
