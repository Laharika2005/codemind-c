#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c;
    scanf("%d",&n);
    int found=0;
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n) found=1;
    }
    if(found==0) printf("False");
    else printf("True");
}