#include <stdio.h>
int main(){
    int num, original, digit;
    int sum = 0;
    printf("enter a three digit number:");
    scanf("%d", &num);
    original = num;
    while(num>0){
        digit = num%10;
        sum = sum + (digit*digit*digit);
        num = num/10;

    }
    if(sum == original){
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");

    }
    return 0;


    
}