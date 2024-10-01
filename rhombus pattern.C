#include <stdio.h>

int main()
{
int i, j, x;

printf("Enter The No. Of rows To Print Rhombus: ");
scanf("%d", &x);


for(i=1; i<=x; i++)
{
/* Code Block To Print spaces */
for(j=1; j<i; j++)
{
printf(" ");
}

for(j=1; j<=x; j++)
{
printf("*");
}

printf("\n");
}

return 0;
}
