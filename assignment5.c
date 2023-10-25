#include <stdio.h>
#include <math.h>

int main() {
  int num, exp;

  printf("Enter the number: ");
  scanf("%d", &num);
  printf("Enter the power: ");
  scanf("%d", &exp);

  printf("%d to the power %d is: %d\n", num, exp, (int)pow(num, exp));

  return 32;
}
