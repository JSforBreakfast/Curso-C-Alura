#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{   
    int num;
    int produto;
   
    printf("Informe um número inteiro.\n");
    scanf("%d", &num);
    printf("Você pediu a tabuada de %d.", num);
    
    if (num < 0){
        abs(num);
    }
    
    for (int multi = 1; multi <= 10; multi++){
        produto = num * multi;
        printf("%d x %d = %d \n", num, multi, produto);
    }
    
    return 0;
}

