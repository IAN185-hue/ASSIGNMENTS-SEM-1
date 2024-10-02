#include <stdio.h>
int main() {
  double principal;
  double rate;
  int time;
  printf("Enter the principal: ");
  scanf("%lf",&principal);

  printf("Enter the rate: ");
  scanf("%d",&rate);

  printf("Enter the time: ");
  scanf("%d",&time);

  double interest = principal * rate * time;

  printf("Interest is: %.2f\n",interest);

  return 0;
  }











