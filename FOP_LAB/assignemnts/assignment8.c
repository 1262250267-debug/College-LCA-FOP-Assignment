#include <stdio.h>
int main(){
    int m1, m2, m3, m4, m5;
    float avg;
    printf("enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    
    if(m1 >= 40 && m2 >= 40 && m3>= 40 && m4 >=40 && m5>=40){
        printf("PASS\n");
        avg = (m1 + m2 + m3 + m4 + m5)/5.0;
        printf("aggregate percentage : %.2f%% \n", avg);
    }
    if (avg>=75){
    printf("distinction");
       }
       else if(avg>=60 && avg<75){
        printf("first divison");
       }
       else if(avg>=50 && avg < 60 ){
        printf("second divison");
       }
       else if(avg>=40 && avg < 50 ){
        printf("third divison");
       }
else{
    printf("fail");
}






}