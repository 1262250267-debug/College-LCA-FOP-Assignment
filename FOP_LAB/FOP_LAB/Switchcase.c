//31/01/2026
#include<stdio.h>
int main()
{
    int a,b,po;
    int (ch);
    
    printf("Enter first number:");
    scanf("%d",&a);
      printf("Enter second number:");
    scanf("%d",&b);
      printf("Enter operator:");
    scanf("%d",  &ch);

switch(ch)
{
case 1:
printf("Addition=%d",a+b);
 break;
case 2:
printf("Subtraction=%d",a-b);
break;
case 3:
printf("Multiplication=%d",a*b);
break;
case 4:
printf("Division=%d",a/b);
break;
default:
printf("Invalid operator");
}
return(0);
}
