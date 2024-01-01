#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int count_of_lowercase=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            count_of_lowercase++;
        }
    }
    printf("%d",count_of_lowercase);
}