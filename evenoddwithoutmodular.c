#include <stdio.h>

int isEven(int n)
{
return (!(n & 1));
}

int main()
{
int n;
printf("\nEnter a number :");
scanf("%d",&n);
printf("\n");
printf("\n%d is ",n);
isEven(n) ? printf("Even\n") : printf("Odd\n");

return 0;
}