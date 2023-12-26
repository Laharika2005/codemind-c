#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int x=n*n;
    while(x>0)
    {
        sum =sum+x%10;
        x/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}