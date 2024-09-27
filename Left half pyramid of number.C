#include<stdio.h>
int main(){
int i, j, k;
int row=5;
for(i=0;i<row; i++){
for(j=0; j<2*(row-i)-1; j++){
printf(" ");
  }
for(k=0; k<=i; k++){
printf("%d ",k+1);
  }
printf("\n");
  }
return 0; 
}
