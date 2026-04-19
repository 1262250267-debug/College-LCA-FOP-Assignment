#include <stdio.h>
#include <math.h>
int main(){
    int a, b, choice, power_, fact;
    printf("enter number 1:");
    printf("enter number 2: ");
    scanf("%d %d", &a, &b);
    printf("enter choice: %d ", choice);
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("addition = %d", a+b);
        break;
        case 2:
        printf("sbutraction = %d", a - b);
        break;
        case 3:
        
        printf("enter power:");
        scanf("%d", &power_);
        printf("power of num 1 is: %.2f\n", pow(a, power_));
        printf("power of num 2 is: %.2f\n", pow(b, power_));
        break;
        
        default:
        printf("invalid choice");


    }
}