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
