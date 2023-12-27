#include<stdio.h>
int main()
{
    int s,i;
    scanf("%d",&s);
    int arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<s;i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}
    
    