#include <stdio.h>

int main() {
    int a,b;

   printf("Enter Two Numbers\n");
   scanf("%d %d",&a,&b);

  // Small among a and b
    if(a<b)
      {
        printf("smallest no is %d\n",a);
      }
    else
      {
          printf("smallest no is %d\n",b);
      } 

 return 0;

}
