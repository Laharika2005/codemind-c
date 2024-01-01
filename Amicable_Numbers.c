#include<stdio.h>
int main()
{
    int i,n1,n2;
    scanf("%d%d",&n1,&n2);
    int sum=0;
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n2)
    {
        printf("Amicable");
        
    }
    else {
        printf("Not Amicable");
    }
}