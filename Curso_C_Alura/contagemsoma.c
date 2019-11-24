#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Comece a contagem, somente pare quando atingir 100 e faça a soma de todos os números computados.\n\n");

    int soma = 0;
  
    for(int num = 0; num <= 100; num++){
            printf("%d \n", num);
            //a cada vez que o programa fizer uma iteração, haverá uma adição do número num que foi contado no for loop à variável soma até que a variável num seja 100
            soma = soma + num;  
        }
        
    printf("A soma desses números é %d. \n", soma);
        
    return 0;
}
