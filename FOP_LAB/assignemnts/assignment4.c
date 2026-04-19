#include <stdio.h>
int main(){
    float BS, HRA, TA, GS, PT, net;
    printf("enter basic salary:");
    scanf("%f", &BS);
    HRA = 0.10*BS;
    TA = 0.50*BS;
    GS = BS + HRA +TA;
    PT = 0.02 *GS;
    net = GS - PT;
    printf("gross salary = %.2f\n", GS);
    printf("net salary = %.2f\n", net);
    return 0;
}