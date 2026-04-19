#include <stdio.h>
int main()
{
    int i;
    int a[4],b[4],c[4];
   printf("enter element of array a");
    for(i=0;i<=3;i++)
{
    scanf("%d",&a[i]);
}
printf("enter element of array b");
    for(i=0;i<=3;i++)
{
    scanf("%d",&b[i]);
}
for(i=0;i<=3;i++)
{
    c[i]=a[i]+b[i];

    printf("c=%d\n",c[i]);
}
}