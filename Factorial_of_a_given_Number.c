#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int fac=1;
    for(i=1;i<=n;i++)
    {
        fac =fac*i;
    }
    printf("%d",fac);
}