#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year % 4==0)
    printf("leap year");
    else
    printf("Not a leap year");
    return 0;

}