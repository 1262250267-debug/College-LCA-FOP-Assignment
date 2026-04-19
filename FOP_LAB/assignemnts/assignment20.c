//calll by value and call by reference
#include<stdio.h>
int swapbyvalue(int num1, int num2);
int swapbref(int *num1, int *num2);
int swapbyvalue( int num1, int num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
       printf("inside function: %d, %d\n", num1, num2);

    }
    
    int swapbyref(int *num1, int *num2)
    {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
        printf("inside function: %d, %d\n", *num1, *num2);

    }
int main(){
    int num1, num2, ch, temp;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("enter choice:");
    scanf("%d", &ch);
    switch(ch){
        case 1:
        swapbyvalue(num1, num2);
        break;
        case 2:
        swapbyref(&num1, &num2);
        default:
        printf("invalid choice");
   
    }
    return 0;
}
