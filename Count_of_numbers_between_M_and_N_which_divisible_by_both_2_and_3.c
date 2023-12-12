#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int cnt =0;
    for(int i=m;i<=n;i++)
    {
        if(i%6==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}