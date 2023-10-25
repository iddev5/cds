#include <stdio.h>

void main() {
  int a, b, c, d, greater;
  printf("Enter four numbers: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  if (a > b && a > c && a > d) greater = a;
  else if (b > a && b > c && b > d) greater = b;
  else if (c > a && c > b && c > d) greater = c;
  else greater = d;
  
  printf("The number %d is greater.\n", greater);
}
