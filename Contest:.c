#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d" , &X,&A,&B);
    if(X<=((A*1)+(B*2)))
    {
        printf("Qualify");
    }
    else 
    {
        printf("Not Qualify");
    }
}