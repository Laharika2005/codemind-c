#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int avg=sum/n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(avg==arr[i]) 
        {
            flag=1;
            break;
        }
    }
    if(flag==0) printf("False");
    else printf("True");
    
}