#include<stdio.h>
int main()
{
    int n,N; 
    scanf("%d",&n);
    int rev=0;
    N = n;
   while(n>0)
   {
       rev = rev*10+n%10;
       n = n/10;
   }
    if(N==rev)
    {
        printf("True");
    }
    else
    {
       printf("False"); 
    }
}