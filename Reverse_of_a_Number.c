#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0;
    int temp=0;
    while(n>0)
    {
        temp=n;
    temp=temp%10;
    n/=10;
    rev=rev*10+temp;
    }
    printf("%d",rev);
    
}