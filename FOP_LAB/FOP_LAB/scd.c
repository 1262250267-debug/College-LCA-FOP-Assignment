#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,i,scd;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    num1=abs(num1);
    num2=abs(num2);
    for(i=2;i<=num1 && i <= num2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            scd=i;
        }
    }
    printf("SCD=%d",scd);
    return 0;
}