#include<stdio.h>
 int main (){
int x,y,ch;
printf("enter you first number ");
scanf("%d",&x);
printf("enter you second number");
scanf("%d",&y);
printf("1 Add\n2sub\n3mul\n4div\n please choose your option:");
scanf("%d",&ch);
switch(ch)
{
 case 1: printf("sum of two number is %d", x+y);
 break;
 case 2: printf("sum of two number is %d",x-y);
 break;
 case 3: printf("sum of two number is %d", x*y);
  break;
case 4: printf("sum of two number is %d", x/y);
 break;
default: printf("enter valid number");

}

return 0;
}
