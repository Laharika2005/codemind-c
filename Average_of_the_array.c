#include<stdio.h>
int main()
{
    int s,i;
    scanf("%d",&s);
    float sum=0.00;
    int A[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&A[i]);
        sum = sum + A[i]; 
        
    }
    float ave = sum/s;
   printf("%.2f",ave);
    
}