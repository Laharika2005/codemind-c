#include<stdio.h>
int main()
{
    int s;
    scanf("%d" , &s);
    if(s<=10000)
    {
        printf("%.2f" , (s+s*0.8+s*0.2));
    }
    else if(s<=20000)
    {
        printf("%.2f" , (s+s*0.9+s*0.25));
    }
    else
    {
        printf("%.2f" , (s+s*0.95+s*0.3));
    }
}