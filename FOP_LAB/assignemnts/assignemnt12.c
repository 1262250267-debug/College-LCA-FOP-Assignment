#include <stdio.h>

int smallest_divisor(int n) {
    if(n <= 1)
        return n;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0)
            return i;
    }
    return n;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Smallest divisor of %d = %d\n", num1, smallest_divisor(num1));
    printf("Smallest divisor of %d = %d\n", num2, smallest_divisor(num2));

    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));

    return 0;
}