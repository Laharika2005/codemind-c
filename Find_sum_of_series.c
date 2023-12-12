#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float i;
    float sum =0.00;
    for(i=1;i<=n;i++)
    {
        sum =sum+(1/i);
    }
    printf("%.2f",sum);
}