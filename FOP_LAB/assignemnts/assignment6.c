#include <stdio.h>

// Non-recursive (Iterative) function
int factorial_iterative(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Recursive function
int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial not defined for negative numbers.\n");
    } else {
        printf("Factorial (Non-Recursive) = %d\n", factorial_iterative(num));
        printf("Factorial (Recursive) = %d\n", factorial_recursive(num));
    }

    return 0;
}