#include <stdio.h>

void main() {
  int num;
  printf("Input the number to test: ");
  scanf("%d", &num);

  num % 2 == 0 ? printf("Even number\n") : printf("Odd number\n");
}
