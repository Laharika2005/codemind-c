#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d" , &X,&Y);
    if((Y-X)>0)
    {
        printf("Profit");
    }
    else if((Y-X)<0)
    {
        printf("Loss");
    }
    else 
    {
        printf("No Profit and No Loss");
    }
    
}