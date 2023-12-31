#include<stdio.h>
#include<math.h>
int main()
{
    float ci,p,r,t,a;
    scanf("%f%f%f",&p,&r,&t);
    ci=p*pow((1+r/100),t);
    a=ci-p;
    printf("%.2f",a);
}