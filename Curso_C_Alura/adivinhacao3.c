#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <math.h>
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
    int acertou = 0;
    int numTentativas;
    
    int nivel; 
    
    printf("Qual o nível de dificuldade? \n");
    printf(" [1] Fácil [2] Médio [3] Difícil \n\n");
    printf("Escolha:\n");
    scanf("%d", &nivel);
    
        switch (nivel){
            case 1:
                numTentativas = 20;
                    break;
            case 2:
                numTentativas = 10;
                    break;
            default:
                numTentativas = 5;
                    break;
        }

    // if (nivel == 1){
    //     numTentativas = 20;
    // } else if (nivel == 2){
    //     numTentativas = 10;
    // } else {
    //     numTentativas = 5;
    // }
    
   for(int i = 1; i <= numTentativas; i++) {
        
        printf("Tentativa %d.\n", tentativas);
        printf("Qual é o seu chute?\n");
        
        scanf("%d", &chute);
        
        if(chute < 0){
        printf("Você não pode chutar números negativos.\n");
        continue;
        }
        
        int maior = chute > numSec;
        //int menor = chute < numSec;
        
        if(acertou){
            acertou = 1;
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
    
    if(acertou) {
        printf("Você ganhou!");    
        printf("Você acertou em %d tentativas.\n", tentativas);
        printf("Total de pontos: %.2f \n", pontos);
    } else {
        printf("Você perdeu: Tente de novo.");
    }
}

