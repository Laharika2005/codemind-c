#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        int x=a*i;
        printf("%d x %d = %d
",a,i,x);
    
    }
}