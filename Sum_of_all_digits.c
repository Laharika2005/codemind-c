#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp=0;
    int sum=0;
    while(n>0)
    {
        temp = n;
        temp = temp%10; 
        n/=10;
        sum = temp + sum;
    }
    printf("%d",sum);
}