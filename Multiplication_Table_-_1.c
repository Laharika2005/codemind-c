#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        int x=i*n;
        printf("%d x %d = %d
",n,i,x);
        
    }
}