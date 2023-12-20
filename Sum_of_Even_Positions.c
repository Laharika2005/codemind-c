#include<stdio.h>
int main()
{
    int s,i;
    scanf("%d",&s);
    int sum=0;
    int arr[s];
    for( i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i+=2)
    {
        sum = sum+arr[i];
        
    }
       printf("%d",sum);
}