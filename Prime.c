#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int count =0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }
        {
          if(count==2)
          {
              printf("Prime");
          }
          else
          {
              printf("Not Prime");
          }
        }
}