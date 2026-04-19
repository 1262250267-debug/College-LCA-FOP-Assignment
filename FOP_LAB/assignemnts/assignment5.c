#include <stdio.h>

// Function to add two matrices
void add(int a[10][10], int b[10][10], int r, int c) {
    int sum[10][10];
    printf("\nAddition of matrices:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Function to find saddle point
void saddle(int a[10][10], int r, int c) {
    int found = 0;
    for(int i=0;i<r;i++) {
        int min = a[i][0], col = 0;

        // Find minimum in row
        for(int j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        // Check if it is maximum in column
        int k;
        for(k=0;k<r;k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle point: %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("\nNo saddle point\n");
}

// Function to find inverse of 2x2 matrix
void inverse(int a[2][2]) {
    int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("\nInverse not possible\n");
        return;
    }

    printf("\nInverse matrix:\n");
    printf("%f %f\n", a[1][1]/(float)det, -a[0][1]/(float)det);
    printf("%f %f\n", -a[1][0]/(float)det, a[0][0]/(float)det);
}

// Function to check magic square
void magic(int a[10][10], int n) {
    int sum = 0, temp;

    for(int j=0;j<n;j++)
        sum += a[0][j];

    for(int i=1;i<n;i++) {
        temp = 0;
        for(int j=0;j<n;j++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a magic square\n");
            return;
        }
    }

    for(int j=0;j<n;j++) {
        temp = 0;
        for(int i=0;i<n;i++)
            temp += a[i][j];
        if(temp != sum) {
            printf("\nNot a magic square\n");
            return;
        }
    }

    printf("\nMagic square\n");
}

int main() {
    int a[10][10], b[10][10], r, c, n;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &b[i][j]);

    add(a, b, r, c);
    saddle(a, r, c);

    // Inverse (2x2 only)
    if(r == 2 && c == 2)
        inverse(a);
    else
        printf("\nInverse only for 2x2 matrix\n");

    // Magic square check
    printf("\nEnter size for magic square check: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    magic(a, n);

    return 0;
}
