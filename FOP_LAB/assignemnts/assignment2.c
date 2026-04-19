#include <stdio.h>
int main(){
    int choice;
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("enter choice:");
    scanf("%d", &choice);

    switch(choice){
        case 1:
        printf("addition = %d", a+b);
        break;
        case 2:
        printf("subtraction = %d", a-b);
        break;
        case 3:
        printf("multiplication = %d", a*b);
        break;
        case 4:
        printf("division = %d", a/b);
        break;
        default:
        printf("invalid choice");


    }
    return 0;
}