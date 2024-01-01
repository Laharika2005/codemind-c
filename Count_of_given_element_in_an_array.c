#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ge;
    int count=0;
    scanf("%d",&ge);
    for(int i=0;i<n;i++)
    {
        if(ge==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}