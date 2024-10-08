#include<stdio.h>

int main()
{
 float km, m;

 printf("Enter distance in kilometer: ");
 scanf("%f", &km);

 m = km * 1000;

 printf("%0.3f Kilometer = %0.3f Meter", km, m);

 return 0;
}
