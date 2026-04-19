#include<stdio.h>
int main()
{
    int a,b;
    int power;
    int i;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    power=a;
    for (i=1;i<b;i++)
    {
        power=power*a;
    }
    printf("power=%d",power);
    return 0;
}
