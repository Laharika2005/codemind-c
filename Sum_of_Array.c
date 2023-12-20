#include<stdio.h>
int main()
{
    int s,i;
    scanf("%d",&s);
    int sum=0;
    int A[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&A[i]);
        sum = sum + A[i]; 
        
    } 
       printf("%d",sum);
    
}