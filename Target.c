#include<stdio.h>
int main()
{
int P1, P2 , P3 , P4;
scanf("%d%d%d%d" , &P1 , &P2 , &P3 , &P4);
if((P1>9) && (P2>9) && (P3>9) && (P4>9))
{
    printf("YES");
}
else
{
    printf("NO");
}
}