#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//#define TENTATIVAS 5

int main(){
    //imprime o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("x Bem vindo ao jogo de adivinhacao  x\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    int segundos = time(0);
    srand(segundos);
    
    int numeroAleatorio = rand();
    int numSec = numeroAleatorio%100;
    
    //int TENTATIVAS = 5;
    int chute;
    int tentativas = 1;
    int ganhou = 0;
    float pontos = 1000;
    
    
    while(ganhou == 0) {
        
        printf("Tentativa %d.\n", tentativas);
        printf("Qual é o seu chute?\n");
        
        scanf("%d", &chute);
        
        if(chute < 0){
        printf("Você não pode chutar números negativos.\n");
        continue;
        }
        
        int acertou = (chute == numSec);
        int maior = chute > numSec;
        //int menor = chute < numSec;
        
        if(acertou){
        
        printf("Parabéns! Você acertou!\n\n");
        
        ganhou == 1;
        break;
        } 
        
        else if(maior){
                printf("Seu chute foi maior que o número secreto.\n\n");
        }
        
        else {
                printf("Seu chute foi menor que o número secreto.\n\n");
        }
        
        tentativas += 1;
        
        //a função abs() devolve o valor absoluto do número entre parenteses
        float pontosPerdidos = abs(chute - numSec)/(double)2;
        
        // if(pontosPerdidos < 0){
        //     pontosPerdidos = pontosPerdidos * -1;
        // }
        pontos = pontos - pontosPerdidos;
    }
    
    printf("\n\nFim de jogo!\n");
    printf("Você acertou em %d tentativas.\n", tentativas);
    printf("Total de pontos: %.2f \n", pontos);
}
