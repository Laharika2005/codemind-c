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
    
    for(i=0;i<s;i++)
    {
        if(arr[i]%2!=0)
        {
           printf("%d ",arr[i]);
        }
    }
    for(i=0;i<s;i++)
    	{
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    
}