#include<stdio.h>
int main()
{
    int n;
    scanf("%d" , &n);
    if(n%2!=0)
    {
        printf("weird");
    }
    else if((n%2==0) && (n>1) && (n<6))
    {
        printf("not weird");
    }
    else if((n%2==0) && (n>5) && (n<21))
    {
        printf("weird");
    }
    else 
    {
        printf("not weird");
    }
}