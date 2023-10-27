#include <stdio.h>

void main() {
  float basic, da, hra, ta, total;

  printf("Enter basic pay: ");
  scanf("%f", &basic);

  da = 0.4 * basic;
  hra = 0.15 * basic;
  ta = 0.2 * basic;
  total = basic + da + hra + ta;

  printf("Salary statement:\n");
  printf("Basic pay: %.2f\n", basic);
  printf("D.A: %.2f\n", da);
  printf("H.R.A: %.2f\n", hra);
  printf("T.A: %.2f\n", ta);
  printf("Gross Pay: %.2f\n", total);
  
}
