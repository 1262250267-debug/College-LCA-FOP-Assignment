#include<stdio.h>
int main()
{
    int num,temp,digit;
     printf("enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
         digit=num % 10;
         printf("%d,digit");
         num=num/10;
    }
    printf("/n");
}