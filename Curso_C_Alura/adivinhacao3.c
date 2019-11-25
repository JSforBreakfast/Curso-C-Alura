#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("x Bem vindo ao jogo de adivinhacao  x\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");

    //variaveis
    int chute;
    int acertou;
    int nivel;
    int numTentativas;
    
    //variavel de pontos
    float pontos = 1000;
    
    //variaveis do numero aleatorio
    srand(time(0));
    int numSec = rand() % 100;
    
    //nivel de diculdade
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
    
    //loop principal
   for(int tentativas = 1; tentativas <= numTentativas; tentativas++) {
        
        printf("Tentativa %d de %d \n", tentativas, numTentativas);
        
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        
        //tratando chute de numeros negativos
        if(chute < 0){
        printf("Você não pode chutar números negativos.\n");
        tentativas--;
        continue;
        }
        
        //verifica se o chute foi maior ou menor que o numero aleatorio
        acertou = chute == numSec;
        
        if(acertou){
            break;
        } else if(chute > numSec){
            printf("Seu chute foi maior que o número secreto.\n\n");
        } else {
            printf("Seu chute foi menor que o número secreto.\n\n");
        }
        
        
        //a função abs() devolve o valor absoluto do número entre parenteses
        //clacula a quantidade de pontos
        float pontosPerdidos = abs(chute - numSec)/(double)2;
        pontos = pontos - pontosPerdidos;
        
        // if(pontosPerdidos < 0){
        //     pontosPerdidos = pontosPerdidos * -1;
        // }
    }
    
    printf("\n\nFim de jogo!\n");
    
    if(acertou) {
        printf("Você ganhou!");    
        printf("Total de pontos: %.2f \n", pontos);
    } else {
        printf("Você perdeu... Tente de novo.");
    }
    return 0;
}

