#include <stdio.h>

void main() {
  int a, b, greater;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);

  greater = a > b ? a : b;
  printf("The number %d is greater.\n", greater);
}
