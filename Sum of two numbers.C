#include <stdio.h>
int main(void) {
  int a=1,b=2, sum;
  printf("Enter two numbers: ");
  scanf("%d %d",&a, &b);
  sum =a+b;
  printf("The sum of %d and %d is %d\n", a,b, sum);
  return 0;
}
