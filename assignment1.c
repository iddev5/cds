#include <stdio.h>
#include <stdlib.h>

void main() {
  int a, b, c;
  int a2, b2, c2;
  printf("Enter the three sides of a triangle: ");
  scanf("%d%d%d", &a, &b, &c);

  a2 = a * a;
  b2 = b * b;
  c2 = c * c;

  if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2) {
    printf("Right angled triangle\n");
    exit(1);
  }

  if (a == b && b == c) {
    printf("Equilateral triangle\n");
  } else if (a == b || b == c || c == a) {
    printf("Isosceles triangle\n");
  } else {
    printf("Scalene triangle\n");
  }
}
