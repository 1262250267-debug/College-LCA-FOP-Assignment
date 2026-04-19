#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",& num);
    if (num % 2==0)
    printf("even number");
    else
    printf("odd number");
    return 0;
}