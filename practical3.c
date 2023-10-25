#include <stdio.h>

void main() {
  int a, b, temp;
  printf("Enter marks for first student: ");
  scanf("%d", &a);

  printf("Enter marks for second student: ");
  scanf("%d", &b);

  temp = a;
  a = b;
  b = temp;

  printf("New marks for first student is: %d\n", a);
  printf("New marks for second student is: %d\n", b);
}
