#include <stdio.h>
#include <math.h>

void main() {
  int principle;
  float rate;
  int time;

  float si, ci;

  printf("Enter principle amount: ");
  scanf("%d", &principle);
  printf("Enter rate of interest (%%-age): ");
  scanf("%f", &rate);
  printf("Enter time period (in years): ");
  scanf("%d", &time);

  si = principle * (rate / 100.0) * time;
  printf("Amount for simple interest is: %.2f\n", si + principle);

  ci = principle * pow(1 + rate / 100.0, time);
  printf("Amount for compount interest (compounded annually) is: %.2f\n", ci);
}
