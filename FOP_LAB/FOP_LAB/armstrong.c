#include <stdio.h>
void main()
{
    int num, temp, digit, sum;
    printf("enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(temp != 0)
    {
        digit=temp % 10;
        sum=sum +(digit*digit*digit);
        temp= temp /10;
    }
if (sum==num)
{
    printf("number is armstrong");
}
else
{
    printf("number is not armstrong");
}

}