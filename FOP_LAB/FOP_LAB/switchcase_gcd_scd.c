#include <stdio.h>
#include <stdlib.h>

int main()
{
int num1,num2,i,gcd,scd, choice;

printf("Enter two numbers:");
scanf("%d %d", &num1, &num2);

num1 = abs(num1);
num2 = abs(num2);

printf("\n1. GCD\n2. SCD\nEnter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1:
for(i = 1; i <= num1 && i <= num2; i++)
{
if(num1 % i == 0 && num2 % i == 0)
{
gcd = i;
}
}
printf("GCD = %d", gcd);
break;

case 2:
for(i = 2; i <= num1 && i <= num2; i++)
{
if(num1 % i == 0 && num2 % i == 0)
{
scd = i;
break;
}
return 0;
}
}
}