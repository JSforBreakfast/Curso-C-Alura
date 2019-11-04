#include <stdio.h>

int main() {
  int x;
  int y;


  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int prod = x * y;
  printf("O produto de %d por %d e igual a %d\n", x, y, prod);
}
//a ordem de declaração das variáveis importa. É necessário declarar as variáveis que serão multiplicadas antes do printf do produto delas e declarar a variavel que indica a multiplicação antes do printf do produto final.
