
#include <stdio.h>

int main()
{
    int no;
    printf("Enter a Number");
    scanf("%d",&no);
if(no%3==0 || no%7==0)
{
    if(no%3==0 && no%7==0)
    printf("Three- Seven");
    
    else if(no%7==0)
    printf("Seven");
    
    else
    printf("Three");
}

else
printf("Number is Not Divisible by 3 & 7");



    return 0;
}