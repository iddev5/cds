#include <stdio.h>

void main() {
  int year;

  printf("Enter the year: ");
  scanf("%d", &year);

  int is_leap = year % 400 == 0 ? 1 : (year % 100 != 0 && year % 4 == 0 ? 1 : 0);
  if (is_leap)
    printf("Leap year\n");
  else
    printf("Not a leap year\n");
}
