#include <stdio.h>

void main() {
  int a, b, c, d, option;
  printf("Enter four numbers: ");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  printf("\nOptions:\n");
  printf("1. Calculate Total\n2. Calculate Average\n");
  printf("3. Smallest Number\n4. Largest Number\n");
  printf("Choice: ");
  scanf("%d", &option);

  switch (option) {
    case 1:
      printf("Total is: %d", a + b + c + d);
      break;
    case 2:
      float average = (float)(a + b + c + d) / 4.0;
      printf("Average is: %.2f", average);
      break;
    case 3:
      int smallest = 0;

      if (a < b && a < c && a < d) smallest = a;
      else if (b < a && b < c && b < d) smallest = b;
      else if (c < a && c < b && c < d) smallest = c;
      else smallest = d;
      
      printf("Smallest number is: %d", smallest);
      break;
    case 4:
      int largest = 0;

      if (a > b && a > c && a > d) largest = a;
      else if (b > a && b > c && b > d) largest = b;
      else if (c > a && c > b && c > d) largest = c;
      else largest = d;
      
      printf("Largest number is: %d", largest);
      break;
    default:
      printf("Invalid option");
      break;
  }
  
}
