#include <stdio.h>
#include <stdlib.h>

int main(){
    //imprime o cabecalho do jogo
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("x Bem vindo ao jogo de adivinhacao  x\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");

    int numSec = 42;
    
    int chute;
    
    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);
    
    printf("Seu chute foi: %d.\n", chute);
    
    if(chute == numSec){
    
    printf("Você acertou!");
    
    }else{
        
        printf("Você errou.\n");
        
        if(chute > numSec){
            printf("Seu chute foi maior que o número secreto.\n");
        }
        
        if(chute < numSec){
            printf("Seu chute foi menor que o número secreto.\n");
        }
    }
}
