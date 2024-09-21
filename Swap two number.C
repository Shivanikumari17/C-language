#include<stdio.h>
int main(){
  int x,y,z;
  printf("Enter the value of x:");
  scanf("%d",&x);
  printf("Enter the value of y:");
  scanf("%d", &y);
  z=x;
  x=y;
  y=z;
  printf("After swapping the value of x is %d\n",x);
  printf("After swapping the value of y is %d\n",y);
  return 0;
  }
